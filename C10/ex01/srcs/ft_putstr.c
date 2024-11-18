/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpicchio <gpicchio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:44:01 by gpicchio          #+#    #+#             */
/*   Updated: 2024/11/06 17:54:26 by gpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str);

void	ft_putstr(char *str, char *prog_name, char *cat_name)
{
	write(1, cat_name, ft_strlen(cat_name));
	write(1, ": ", 2);
	write(1, prog_name, ft_strlen(prog_name));
	write(1, ": ", 2);
	write(1, str, ft_strlen(str));
	write(1, "\n", 1);
}
