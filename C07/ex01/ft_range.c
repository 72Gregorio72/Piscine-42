/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpicchio <gpicchio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:41:58 by gpicchio          #+#    #+#             */
/*   Updated: 2024/10/29 19:02:47 by gpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;
	int	size;

	i = 0;
	if (max < 0 && min < 0)
		size = (min * -1) - (max * -1);
	else if (min < 0)
		size = max + (min * -1);
	else
		size = max - min;
	if (min >= max)
		return (NULL);
	array = (int *)malloc((size + 1) * sizeof(int));
	if (!array)
		return (NULL);
	while (i < size)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}
/*
int main()
{
	int min = 20;
	int max = 40;
	int *array = ft_range(min, max);

	for(int i = 0; i < max - min; i++)
		printf("%d ", array[i]);
}*/