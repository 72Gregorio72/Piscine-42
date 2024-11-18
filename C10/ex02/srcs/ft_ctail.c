/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ctail.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpicchio <gpicchio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:30:53 by gpicchio          #+#    #+#             */
/*   Updated: 2024/11/07 18:39:15 by gpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <libgen.h>
#include "../includes/ft.h"
#include <stdlib.h>

int	ft_filelen(int fd)
{
	int		size;
	char	buffer[4097];
	ssize_t	ret;

	size = 0;
	ret = read(fd, buffer, 4096);
	while (ret > 0)
	{
		size += ret;
		ret = read(fd, buffer, 4096);
	}
	return (size);
}

void	ft_ctail(char *path, char *prog_name, int n, char *pg)
{
	int		fd;
	char	buffer[4097];
	ssize_t	ret;
	int		size;

	size = 0;
	fd = open(path, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr(strerror(errno), prog_name, pg);
		return ;
	}
	size = ft_filelen(fd);
	close(fd);
	fd = open(path, O_RDONLY);
	ret = read(fd, buffer, 4096);
	n = size - n;
	if (n < 0)
		n = 0;
	while (n < size)
	{
		write(1, &buffer[n], 1);
		n++;
	}
	close(fd);
}
