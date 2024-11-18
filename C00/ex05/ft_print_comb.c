/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpicchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:20:07 by gpicchio          #+#    #+#             */
/*   Updated: 2024/10/15 17:52:49 by gpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_multiple_stamps(int i, int j, int k)
{
	char	c;

	if (i != j && k != j && i != k)
	{
		if (i < j && j < k)
		{
			c = i + 48;
			write(1, &c, 1);
			c = j + 48;
			write(1, &c, 1);
			c = k + 48;
			write(1, &c, 1);
			if (i != 7)
			{
				write(1, ", ", 2);
			}
		}
	}
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 1;
	k = 2;
	while (i < 10)
	{
		while (j < 10)
		{
			while (k < 10)
			{
				ft_multiple_stamps(i, j, k);
				k++;
			}
			k = 0;
			j++;
		}
		j = 0;
		i++;
	}
}
