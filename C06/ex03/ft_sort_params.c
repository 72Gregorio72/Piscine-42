/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpicchio <gpicchio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:19:29 by gpicchio          #+#    #+#             */
/*   Updated: 2024/10/29 11:28:21 by gpicchio         ###   ########.fr       */
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

void	ft_swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void	sort(int n, char **c)
{
	int		i;
	int		j;

	i = 1;
	j = 2;
	while (i < n)
	{
		while (j < n)
		{
			if (ft_strcmp(c[i], c[j]) > 0)
			{
				ft_swap(&c[i], &c[j]);
			}
			j++;
		}
		i++;
		j = i + 1;
	}
	i = 0;
	while (i < n)
	{
		write(1, c[i], ft_strlen(c[i]));
		write(1, "\n", 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	sort(ac, av);
	return (0);
}
