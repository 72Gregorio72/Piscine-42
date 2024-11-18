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

void ft_foreach(int *tab, int length, void(*f)(int))
{
	int i;

	i = 0;
	while(i < length)
	{
		f(tab[i]);
		i++;
	}
}

int main()
{
	int tab[] = {1, 2, 3, 4, 5};
	ft_foreach(tab, 5, &ft_putnbr);
	return 0;
}