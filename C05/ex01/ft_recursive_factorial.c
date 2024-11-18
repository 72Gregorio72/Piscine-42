/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpicchio <gpicchio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:46:21 by gpicchio          #+#    #+#             */
/*   Updated: 2024/10/23 11:59:24 by gpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_helper(int i, int num)
{
    if(i == 0)
        return (num);
    if(i > 0)
    {
        return (ft_helper(i - 1, num * i));
    }
    return (0);
}

int ft_recursive_factorial(int nb)
{
    return (ft_helper(nb, 1));
}

int main()
{
    printf("%d", ft_recursive_factorial(5));
}