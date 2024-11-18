/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpicchio <gpicchio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:40:31 by gpicchio          #+#    #+#             */
/*   Updated: 2024/10/22 15:40:31 by gpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int		i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

/*
#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
    char str1[] = "Hello, World!";
    char str2[] = "Hello, Earth!";
    unsigned int n = 10;

    int result = ft_strncmp(str1, str2, n);
    
    if (result < 0)
        printf("'%s' is less than '%s' (up to %u characters)\n", str1, str2, n);
    else if (result > 0)
        printf("'%s' is greater than '%s'
		(up to %u characters)\n", str1, str2, n);
    else
        printf("'%s' is equal to '%s' (up to %u characters)\n", str1, str2, n);

    return 0;
}
*/