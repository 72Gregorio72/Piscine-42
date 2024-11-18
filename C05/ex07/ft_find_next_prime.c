/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpicchio <gpicchio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:44:57 by gpicchio          #+#    #+#             */
/*   Updated: 2024/10/24 10:56:01 by gpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int ft_find_next_prime(int nb)
{
    int i;
    int check;

    i = nb;
    check = 0;
    if (nb <= 1) {
        return 2;
    }
    i = 2;
    while ( i * i <= nb)
    {
        if (nb % i == 0) {
            check = 1;
        }
        i++;
    }

    if(check)
        return (ft_find_next_prime(nb + 1));
    else
        return (nb);
}

int main()
{
    printf("%d", ft_find_next_prime(8));
}