/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpicchio <gpicchio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:44:25 by gpicchio          #+#    #+#             */
/*   Updated: 2024/11/04 15:28:32 by gpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	get_base_value(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strdup(char *src)
{
	char	*temp;
	int		i;
	int		src_len;

	src_len = ft_strlen(src);
	temp = (char *)malloc((src_len + 1));
	if (temp == NULL)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		temp[i] = src[i];
		i++;
	}
	temp[i] = '\0';
	return (temp);
}

char	*ft_delete_charset(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (get_base_value(str[i], charset))
		{
			str[i] = '\0';
			break ;
		}
		i++;
	}
	return (str);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	char	**tab;
	char	*temp;

	i = 0;
	tab = (char **)malloc(sizeof(char *) * (ft_strlen(str) + 1));
	if (!tab)
		return (NULL);
	while (*str)
	{
		while (*str && get_base_value(*str, charset))
			str++;
		if (*str)
		{
			temp = ft_strdup(str);
			temp = ft_delete_charset(temp, charset);
			if (ft_strlen(temp) > 0)
				tab[i++] = temp;
			while (*str && !get_base_value(*str, charset))
				str++;
		}
	}
	tab[i] = 0;
	return (tab);
}
/*
int main()
{
	char *str = "hello,world,,";
	char *charset = ",";
	char **tab = ft_split(str, charset);
	int i = 0;
	while (tab[i] != 0)
	{
		printf("%s\n", tab[i]);
		i++;
	}
	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return 0;
}*/