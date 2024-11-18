/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpicchio <gpicchio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:36:02 by gpicchio          #+#    #+#             */
/*   Updated: 2024/10/29 15:40:17 by gpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] > 126)
			return (0);
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
			return (i);
		i++;
	}
	return (-1);
}

int	decimal(char *nbr, char *base)
{
	int	i;
	int	mult;
	int	num;
	int	base_val;

	i = ft_strlen(nbr) - 1;
	mult = 1;
	num = 0;
	while (i >= 0)
	{
		base_val = get_base_value(nbr[i], base);
		if (base_val == -1)
			return (-1);
		num += base_val * mult;
		mult *= ft_strlen(base);
		i--;
	}
	return (num);
}
