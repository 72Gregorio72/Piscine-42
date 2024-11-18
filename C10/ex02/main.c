/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpicchio <gpicchio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:11:58 by gpicchio          #+#    #+#             */
/*   Updated: 2024/11/07 16:11:33 by gpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "includes/ft.h"
#include <libgen.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>

void	in_to_out(void)
{
	char	buffer[4097];
	ssize_t	bytes_read;

	bytes_read = read(0, buffer, 4096);
	while (bytes_read > 0)
	{
		bytes_read = read(0, buffer, 4096);
	}
	
}

int	check_c(char *c)
{
	if (c[0] == '-' && c[1] == 'c')
		return (1);
	return (0);
}

void	print_file_header(char *filename)
{
	write(1, "==> ", 5);
	write(1, filename, ft_strlen(filename));
	write(1, " <==\n", 5);
}

void	print_usage_error(char *prog_name)
{
	write(2, prog_name, ft_strlen(prog_name));
	write(2, ": option requires an argument -- 'c'\n", 37);
	write(2, "Try 'tail --help' for more information.\n", 40);
}

int	main(int ac, char **av)
{
	if (ac == 1)
	{
		in_to_out();
	}
	else
	{
		handle_tail_with_option(ac, av);
	}
	return (0);
}
