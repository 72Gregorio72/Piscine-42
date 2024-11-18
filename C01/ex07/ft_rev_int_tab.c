/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpicchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 10:02:34 by gpicchio          #+#    #+#             */
/*   Updated: 2024/10/21 10:02:35 by gpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		j;
	int		app;

	i = 0;
	j = size - 1;
	while (i < size / 2)
	{
		app = tab[i];
		tab[i] = tab[j];
		tab[j] = app;
		j--;
		i++;
	}
}
