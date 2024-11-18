/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafagina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 10:23:39 by mafagina          #+#    #+#             */
/*   Updated: 2024/10/16 11:46:34 by mafagina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int i, int j, int k, int h)
{
	char	c;

	if (i != k || j != h)
	{
		c = i +48;
		write(1, &c, 1);
		c = j +48;
		write(1, &c, 1);
		write(1, " ", 1);
		c = k +48;
		write(1, &c, 1);
		c = h +48;
		write(1, &c, 1);
		write(1, ", ", 1);
	}
}

void	whilee(int i, int j, int k, int h)
{
	while (i < 10)
	{
		while (j < 10)
		{
			while (k < 10)
			{
				while (h < 10)
				{
					if (i <= k && j <= h)
					{
						print(i, j, k, h);
					}
					h++;
				}
				h = j + 1;
				k++;
			}
			k = i;
			j++;
		}
		j = 0;
		i++;
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;
	int	k;
	int	h;

	i = 0;
	j = 0;
	k = 0;
	h = 0;
	whilee(i, j, k, h);
}
