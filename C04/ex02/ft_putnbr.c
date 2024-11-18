/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpicchio <gpicchio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 13:37:41 by gpicchio          #+#    #+#             */
/*   Updated: 2024/10/28 16:33:39 by gpicchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

int	nb_length(int nb)
{
	int	temp;
	int	divisor;

	divisor = 1;
	temp = nb;
	while (temp > 9)
	{
		temp /= 10;
		divisor *= 10;
	}
	return (divisor);
}

void	ft_putnbr(int nb)
{
	int			divisor;
	char		value;

	if (nb == INT_MIN)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write (1, "-", 1);
		nb = nb * -1;
	}
	divisor = nb_length(nb);
	while (divisor > 0)
	{
		value = (nb / divisor % 10) + '0';
		write(1, &value, 1);
		divisor /= 10;
	}
}

/*
#include <stdio.h>
#include <limits.h>

void ft_putnbr(int nb);

int main(void)
{
    int numbers[] = {42, -42, 0, INT_MAX, INT_MIN};
    int i;

    for (i = 0; i < 5; i++)
    {
        ft_putnbr(numbers[i]);
        write(1, "\n", 1);  // Print a newline for better output formatting
    }

    return 0;
}
*/