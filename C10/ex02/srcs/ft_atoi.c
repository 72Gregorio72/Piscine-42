/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpicchio <gpicchio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:49:18 by gpicchio          #+#    #+#             */
/*   Updated: 2024/11/06 16:08:53 by gpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int		i;
	int		nb;

	i = 0;
	nb = -1;
	while (str[i] == ' ' || str[i] < 32 || str[i] > 126)
	{
		i++;
	}
	if (str[i] == '-')
	{
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (nb == -1)
			nb = 0;
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	return (nb);
}
