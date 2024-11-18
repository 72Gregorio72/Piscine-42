/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpicchio <gpicchio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:09:28 by gpicchio          #+#    #+#             */
/*   Updated: 2024/10/23 17:44:11 by gpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int ft_is_prime(int nb) {
    int i;

    if (nb <= 1) {
        return 0;
    }
    i = 2;
    while ( i * i <= nb)
    {
        if (nb % i == 0) {
            return 0;
        }
        i++;
    }

    return 1;
}

int main()
{
    printf("%d", ft_is_prime(97));
}