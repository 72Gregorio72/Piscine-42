/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpicchio <gpicchio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:30:53 by gpicchio          #+#    #+#             */
/*   Updated: 2024/11/06 17:55:28 by gpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <libgen.h>
#include "../includes/ft.h"

void	ft_cat(char *path, char *prog_name, char *cat_name)
{
	int			fd;
	ssize_t		ret;
	char		buffer[30000];

	fd = open(path, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr(strerror(errno), prog_name, cat_name);
		return ;
	}
	ret = read(fd, buffer, 30000);
	while (ret > 0)
	{
		write(1, buffer, ret);
		ret = read(fd, buffer, 30000);
	}
	close(fd);
}
