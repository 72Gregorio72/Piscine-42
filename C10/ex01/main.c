/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpicchio <gpicchio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:11:58 by gpicchio          #+#    #+#             */
/*   Updated: 2024/11/07 11:29:39 by gpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "includes/ft.h"
#include <libgen.h>

void	in_to_out(void)
{
	char	buffer[4097];
	ssize_t	bytes_read;

	bytes_read = read(0, buffer, 4096);
	while (bytes_read > 0)
	{
		write(1, buffer, bytes_read);
		bytes_read = read(0, buffer, 4096);
	}
}

int	main(int ac, char **av)
{
	int	i;

	if (ac == 1)
	{
		in_to_out();
	}
	i = 1;
	while (i < ac)
	{
		ft_cat(av[i], basename(av[i]), av[0]);
		i++;
	}
	return (0);
}
