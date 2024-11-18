/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpicchio <gpicchio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:36:52 by gpicchio          #+#    #+#             */
/*   Updated: 2024/10/28 16:32:06 by gpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*
#include <stdio.h>

int ft_strlen(char *str);

int main(void)
{
    char *test_str = "Hello, World!";
    int length;

    length = ft_strlen(test_str);
    printf("The length of the string \"%s\" is: %d\n", test_str, length);

    return 0;
}
*/