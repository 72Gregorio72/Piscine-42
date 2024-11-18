/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpicchio <gpicchio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:47:22 by gpicchio          #+#    #+#             */
/*   Updated: 2024/10/28 16:36:07 by gpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	is_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		j = i;
		while (base[j] != '\0')
		{
			j++;
			if (base[i] == base[j])
				return (0);
		}
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] > 126)
			return (0);
		else
			i++;
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	get_base_value(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	decimal(char *nbr, char *base)
{
	int	i;
	int	j;
	int	mult;
	int	num;

	i = ft_strlen(nbr) - 1;
	mult = 1;
	num = 0;
	while (i >= 0)
	{
		j = 0;
		while (j < ft_strlen(base))
		{
			if (nbr[i] == base[j])
			{
				num += j * mult;
				mult *= ft_strlen(base);
				break ;
			}
			j++;
		}
		i--;
	}
	return (num);
}

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		mult;
	int		nb;
	char	base_ptr[1000];
	int		j;

	j = 0;
	mult = 1;
	nb = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[++i] == '-')
			mult *= -1;
	}
	while ((get_base_value(str[i], base) && j < 1000 - 1) && is_valid(base))
	{
		base_ptr[j] = str[i];
		i++;
		j++;
	}
	nb = decimal(base_ptr, base) * mult;
	return (nb);
}

#include <stdio.h>

int main(void)
{
	char str1[] = "  \t 123";
	char base1[] = "0123456789";
	printf("%d", ft_atoi_base(str1, base1));
	return 0;
}
1000
