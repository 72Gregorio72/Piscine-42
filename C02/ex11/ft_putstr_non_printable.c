/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdessant <pdessant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 17:15:46 by rockyd            #+#    #+#             */
/*   Updated: 2024/10/23 11:46:22 by pdessant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_non_p(char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	write (1, "\\", 1);
	write (1, &hex[(unsigned char)c / 16], 1);
	write (1, &hex[(unsigned char)c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
			write(1, &str[i], 1);
		else
			ft_non_p(str[i]);
		i++;
	}
}
