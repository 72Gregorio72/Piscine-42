/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpicchio <gpicchio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:01:51 by gpicchio          #+#    #+#             */
/*   Updated: 2024/10/23 12:10:19 by gpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int ft_iterative_power(int nb, int power)
{
    int i;
    int num;

    i = 0;
    num = 1;
    if(nb == 0 && power == 0)
        return (1);
    while(i < power)
    {
        num *= nb;
        i++;
    }

    return (num);
}

int main()
{
    printf("%d", ft_iterative_power(0, 2));
}