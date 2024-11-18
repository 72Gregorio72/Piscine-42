/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpicchio <gpicchio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:40:33 by gpicchio          #+#    #+#             */
/*   Updated: 2024/11/07 16:53:32 by gpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../includes/ft.h"
#include <libgen.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>

void	print_invalid_number_error(char *filename, char *prog_name)
{
	write(2, prog_name, ft_strlen(prog_name));
	write(2, ": invalid number of bytes: '", 28);
	write(1, filename, ft_strlen(filename));
	write(1, "'\n", 2);
}

int	find_check_and_argument(int ac, char **av, int *n, int *found)
{
	int	i;
	int	check;

	i = 1;
	check = 0;
	while (i < ac && !check)
	{
		check = check_c(av[i]);
		if (check && av[i + 1])
		{
			*n = ft_atoi(av[i + 1]);
			*found = i;
			break ;
		}
		i++;
	}
	return (check);
}

void	print_error(int n, char **av, int i)
{
	if (n == -2)
	{
		print_usage_error(av[0]);
	}
	else if (n == -1)
	{
		print_invalid_number_error(basename(av[i + 1]), av[0]);
	}
}

void	handle_file_tail(t_tail_option *opts, int ac, char **av)
{
	while (opts->i < ac)
	{
		opts->fd = open(av[opts->i], O_RDONLY);
		if (opts->check && opts->n >= 0
			&& opts->i != opts->found && opts->i != opts->found + 1)
		{
			if (ac > 4 && opts->letsgosky && opts->fd != -1)
				write(1, "\n", 1);
			if (ac > 4 && opts->fd != -1)
				print_file_header(basename(av[opts->i]));
			opts->letsgosky = 1;
			close(opts->fd);
			ft_ctail(av[opts->i], basename(av[opts->i]), opts->n, av[0]);
			opts->fd = open(av[opts->i], O_RDONLY);
		}
		else if (opts->check && opts->n < 0)
		{
			print_error(opts->n, av, opts->i);
			close(opts->fd);
			break ;
		}
		close(opts->fd);
		opts->i++;
	}
}

void	handle_tail_with_option(int ac, char **av)
{
	t_tail_option	opts;

	opts.i = 1;
	opts.letsgosky = 0;
	opts.n = -2;
	opts.found = -1;
	opts.fd = 0;
	opts.check = find_check_and_argument(ac, av, &opts.n, &opts.found);
	handle_file_tail(&opts, ac, av);
}
