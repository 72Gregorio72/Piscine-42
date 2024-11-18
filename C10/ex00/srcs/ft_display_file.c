/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpicchio <gpicchio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 09:56:03 by gpicchio          #+#    #+#             */
/*   Updated: 2024/11/05 10:52:06 by gpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "../includes/ft.h"

void	ft_display_file(char *path)
{
	int			fd;
	ssize_t		ret;
	char		buffer[4097];

	fd = open(path, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Cannot read file.\n");
		return ;
	}
	ret = read(fd, buffer, 4096);
	while (ret > 0)
	{
		write(1, buffer, ret);
		ret = read(fd, buffer, 4096);
	}
	close(fd);
}
