/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpicchio <gpicchio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:44:01 by gpicchio          #+#    #+#             */
/*   Updated: 2024/10/28 16:32:45 by gpicchio         ###   ########.fr       */
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

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

/*
#include <stdio.h>

int ft_strlen(char *str);
void ft_putstr(char *str);

int main(void)
{
    char *test_str = "Hello, World!";

    ft_putstr(test_str);
    write(1, "\n", 1);  // Print a newline for better output formatting

    return 0;
}
*/