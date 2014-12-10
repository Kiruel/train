#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print(int i, int j, int k, int u)
{
	if (i + j < k + u)
	{
		ft_putchar(i + 48);
		ft_putchar(j + 48);
		ft_putchar(' ');
		ft_putchar(k + 48);
		ft_putchar(u + 48);
		ft_putchar(',');
		ft_putchar(' ');						
	}
}

void ft_print_comb2()
{
	int i;
	int j;
	int k;
	int u;

	i = -1;
	while (++i < 10)
	{
		j = -1;
		while (++j < 10)
		{
			k = -1;
			while (++k < 10)
			{
				u = -1;
				while (++u < 10)
					ft_print(i, j, k, u);
			}
		}
	}
}
