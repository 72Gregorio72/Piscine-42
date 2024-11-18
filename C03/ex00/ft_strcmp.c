/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpicchio <gpicchio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:40:19 by gpicchio          #+#    #+#             */
/*   Updated: 2024/10/22 15:40:19 by gpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
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
int main(int argc, char **argv)
{
    if (argc != 3)
    {
        write(1, "Usage: ./a.out string1 string2\n", 33);
        return (1);
    }

    int result = ft_strcmp(argv[1], argv[2]);

    if (result < 0)
        printf("'%s' is less than '%s'\n", argv[1], argv[2]);
    else if (result > 0)
        printf("'%s' is greater than '%s'\n", argv[1], argv[2]);
    else
        printf("'%s' is equal to '%s'\n", argv[1], argv[2]);

    return (0);
}*/