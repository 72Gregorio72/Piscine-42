/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpicchio <gpicchio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:40:34 by gpicchio          #+#    #+#             */
/*   Updated: 2024/10/22 15:40:34 by gpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i1;
	int	i2;

	i1 = 0;
	i2 = 0;
	while (dest[i1] != '\0')
		i1++;
	while (src[i2] != '\0')
	{
		dest[i1] = src[i2];
		i1++;
		i2++;
	}
	dest[i1] = '\0';
	return (dest);
}

/*
#include <stdio.h>

char *ft_strcat(char *dest, char *src);

int main(void)
{
    char dest[50] = "Hello, ";
    char src[] = "World!";

    printf("Before ft_strcat: %s\n", dest);
    ft_strcat(dest, src);
    printf("After ft_strcat: %s\n", dest);

    return 0;
}
*/