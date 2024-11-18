/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpicchio <gpicchio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:19:16 by gpicchio          #+#    #+#             */
/*   Updated: 2024/10/30 11:19:17 by gpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		dest_lenght;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	dest_lenght = i;
	i = 0;
	while (src[i] != '\0')
	{
		dest[dest_lenght + i] = src[i];
		i++;
	}
	dest[dest_lenght + i] = '\0';
	return (dest);
}

int	total_length(int size, char **strs, char *sep)
{
	int	length;
	int	i;

	length = 0;
	i = 0;
	while (i < size)
		length += ft_strlen(strs[i++]);
	length += (size - 1) * ft_strlen(sep);
	return (length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*c;
	int		i;

	if (size == 0)
	{
		c = (char *)malloc(1);
		if (c != NULL)
			c[0] = '\0';
		return (c);
	}
	c = (char *)malloc((total_length(size, strs, sep) + 1) * sizeof(char));
	if (c == NULL)
		return (NULL);
	c[0] = '\0';
	i = 0;
	while (i < size)
	{
		if (i != 0)
			ft_strcat(c, sep);
		ft_strcat(c, strs[i]);
		i++;
	}
	return (c);
}
/*
int main(void)
{
	char *strs[] = {"Hello", "world", "this", "is", "C"};
	char *sep = "-";
	char *result = ft_strjoin(5, strs, sep);
	printf("%s\n", result);
	free(result);
}
*/
