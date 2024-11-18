/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpicchio <gpicchio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:40:36 by gpicchio          #+#    #+#             */
/*   Updated: 2024/10/22 15:40:36 by gpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *c)
{
	int		i;

	i = 0;
	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, const char *src, unsigned int nb)
{
	unsigned int		dest_length;
	unsigned int		i;

	i = 0;
	dest_length = ft_strlen(dest);
	while (i < nb && src[i] != '\0')
	{
		dest[dest_length + i] = src[i];
		i++;
	}
	dest[dest_length + i] = '\0';
	return (dest);
}

/*
#include <stdio.h>

int	ft_strlen(char *c);
char	*ft_strncat(char *dest, const char *src, unsigned int nb);

int main(void)
{
	char dest[50] = "Hello, ";
	char src[] = "World!";
	unsigned int n = 3;

	printf("Before ft_strncat: %s\n", dest);
	ft_strncat(dest, src, n);
	printf("After ft_strncat: %s\n", dest);

	return 0;
}
*/