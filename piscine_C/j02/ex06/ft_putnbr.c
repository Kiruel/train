#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_ten_power(int c)
{
	int ret;

	ret = 1;
	while (c > 0)
	{
		ret *= 10;
		c--;
	}
	return (ret);
}

int ft_if_nb_neg(int nb)
{
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	return (nb);
}

void ft_putnbr(int nb)
{
	int i;
	int k;

	k = -1;
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		nb = ft_if_nb_neg(nb);
		i = nb;
		while (i > 0)
		{
			i /= 10;
			k++;
		}
		i = nb;
		i /= ft_ten_power(k);
		ft_putchar(i + 48);
		nb %= ft_ten_power(k);
		if (nb < 10)
			ft_putchar(nb + 48);
		if (nb > 10)
			ft_putnbr(nb);
	}
}
