/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpicchio <gpicchio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:10:43 by gpicchio          #+#    #+#             */
/*   Updated: 2024/10/23 12:25:40 by gpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int helper(int nb, int power, int num)
{
    if(nb == 0 && power == 0)
        return (1);
    if(power == 1)
        return (nb);
    nb *= num;
    return (helper(nb, power - 1, num));
}

int ft_recursive_power(int nb, int power)
{
    int num;

    num = nb;
    return (helper(nb, power, num));
}

int main()
{
    printf("%d", ft_recursive_power(10, 3));
}