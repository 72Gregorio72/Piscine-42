/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpicchio <gpicchio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:32:41 by gpicchio          #+#    #+#             */
/*   Updated: 2024/10/23 17:08:54 by gpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int ft_sqrt(int nb)
{
    int i;

    i = 0;
    if (nb < 0) {
        return 0;
    }
    while ( i * i <= nb) {
        if (i * i == nb) {
            return (i);
        }
        i++;
    }

    return (0);
}

int main()
{
    printf("%d", ft_sqrt(36));
}