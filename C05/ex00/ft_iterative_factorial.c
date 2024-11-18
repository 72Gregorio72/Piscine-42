/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpicchio <gpicchio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:37:34 by gpicchio          #+#    #+#             */
/*   Updated: 2024/10/23 11:45:20 by gpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int i;
    
    i = nb - 1;
    if (nb < 0)
		return (0);
    while(i > 0)
    {
        nb *= i;
        i--;
    }

    return (nb);
}

int main()
{
    printf("%d", ft_iterative_factorial(10));
}