#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print(int i, int j, int k)
{
	ft_putchar(i + 48);
	ft_putchar(j + 48);
	ft_putchar(k + 48);
	if (!(i + j + k == 24))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}	

void ft_print_comb()
{
	int i;
	int j;
	int k;

	i = -1;
	while (++i < 10)
	{
		j = -1;
		while (++j < 10)
		{
			k = -1;
			while (++k < 10)
				if (i < j && j < k)
					ft_print(i, j, k);
		}
	}
}

