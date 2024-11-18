/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpicchio <gpicchio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:44:01 by gpicchio          #+#    #+#             */
/*   Updated: 2024/11/07 11:37:42 by gpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str);

void	ft_putstr(char *str, char *prog_name, char *pg)
{
	write(1, pg, ft_strlen(pg));
	write(1, ": ", 2);
	write(1, "cannot open '", 13);
	write(1, prog_name, ft_strlen(prog_name));
	write(1, "' for reading: ", 15);
	write(1, str, ft_strlen(str));
	write(1, "\n", 1);
}
