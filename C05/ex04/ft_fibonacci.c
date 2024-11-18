/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpicchio <gpicchio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:26:01 by gpicchio          #+#    #+#             */
/*   Updated: 2024/10/23 12:50:41 by gpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int fibo(int index, int i1, int i2)
{
    int num;

    num = i1 + i2;
    index--;
    if(index == 1)
        return (num);
    return (fibo(index, i2, num));
}

int ft_fibonacci(int index)
{
    int i;

    return (fibo(index, 1, 0));
}

int main()
{
    printf("%d", ft_fibonacci(0));
}