/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpicchio <gpicchio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:58:43 by gpicchio          #+#    #+#             */
/*   Updated: 2024/10/31 12:15:14 by gpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

extern int	is_valid(char *base);
extern int	ft_strlen(char *str);
extern int	get_base_value(char c, char *base);
extern int	decimal(char *nbr, char *base);

void	build_base_str(long nb, char *base, char *result, int *index)
{
	int	base_len;

	base_len = ft_strlen(base);
	if (nb >= base_len)
		build_base_str(nb / base_len, base, result, index);
	result[(*index)++] = base[nb % base_len];
	result[*index] = '\0';
}

char	*ft_putnbr_base(int nbr, char *base)
{
	long	nb;
	char	*result;
	int		index;
	int		is_negative;

	nb = nbr;
	index = 0;
	is_negative = 0;
	if (!is_valid(base))
		return (NULL);
	result = (char *)malloc(34);
	if (!result)
		return (NULL);
	if (nb < 0)
	{
		is_negative = 1;
		nb = -nb;
		result[index++] = '-';
	}
	build_base_str(nb, base, result, &index);
	return (result);
}

int	convert_to_decimal(char *str, char *base_from, int mult)
{
	int		i;
	int		decimal_val;
	char	*base_ptr;
	int		j;

	i = 0;
	j = 0;
	base_ptr = (char *)malloc(ft_strlen(str) * sizeof(char));
	if (!base_ptr)
		return (0);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			mult *= -1;
	}
	while (get_base_value(str[i], base_from) != -1)
	{
		base_ptr[j++] = str[i++];
	}
	decimal_val = decimal(base_ptr, base_from) * mult;
	free(base_ptr);
	return (decimal_val);
}

char	*ft_convert_base(char *str, char *base_from, char *base_to)
{
	int		decimal_val;

	if (!is_valid(base_from) || !is_valid(base_to))
		return (NULL);
	decimal_val = convert_to_decimal(str, base_from, 1);
	return (ft_putnbr_base(decimal_val, base_to));
}
/*
#include <stdio.h>
#include <stdlib.h>

extern char *ft_convert_base(char *str, char *base_from, char *base_to);

int main(void)
{
    char *result;

    // Test 1: Simple conversion - Decimal to Binary
    result = ft_convert_base("3 ", "0123456789", "0123456");
    printf("Decimal to Binary: 42 -> %s\n", result);
    free(result);

    return 0;
}

*/
