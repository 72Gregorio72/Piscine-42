/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpicchio <gpicchio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:40:38 by gpicchio          #+#    #+#             */
/*   Updated: 2024/10/22 15:40:38 by gpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	tmp;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			i = 0;
			tmp = 0;
			while (to_find[i] != '\0')
			{
				if (str[i] != to_find[i])
					tmp = 1;
				i++;
			}
			if (tmp == 0)
				return (str);
		}
		str++;
	}
	return (0);
}

/*
#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int main(void)
{
    char str1[] = "Hello, world!";
    char to_find1[] = "world";
    char to_find2[] = "42";
    char to_find3[] = "";

    char *result;

    result = ft_strstr(str1, to_find1);
    printf("Searching for '%s' in '%s':
	%s\n", to_find1, str1, result ? result : "Not found");

    result = ft_strstr(str1, to_find2);
    printf("Searching for '%s' in '%s': %s\n", to_find2, 
	str1, result ? result : "Not found");

    result = ft_strstr(str1, to_find3);
    printf("Searching for '%s' in '%s': %s\n", to_find3, str1, 
	result ? result : "Not found");

    return 0;
}
*/