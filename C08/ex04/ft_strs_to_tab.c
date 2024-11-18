/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpicchio <gpicchio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:53:21 by gpicchio          #+#    #+#             */
/*   Updated: 2024/10/31 10:53:45 by gpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*temp;
	int		src_len;

	src_len = ft_strlen(src);
	temp = (char *)malloc((src_len + 1));
	if (temp == NULL)
		return (0);
	return (ft_strcpy(temp, src));
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int						i;
	struct s_stock_str		*par;

	i = 0;
	par = (struct s_stock_str *)malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (par == NULL)
		return (NULL);
	while (i < ac)
	{
		par[i].size = ft_strlen(av[i]);
		par[i].str = av[i];
		par[i].copy = ft_strdup(av[i]);
		i++;
	}
	par[i].str = 0;
	return (par);
}
/*
int main(int ac, char **av)
{
	struct s_stock_str *par;

	par = ft_strs_to_tab(ac - 1, av + 1);

	int i;

	i = 0;
	while (par[i].str != 0)
	{
		printf("%s\n", par[i].str);
		printf("%d\n", par[i].size);
		printf("%s\n", par[i].copy);
		free(par[i].copy);
		i++;
	}
	free(par);
	return (0);
}
*/
