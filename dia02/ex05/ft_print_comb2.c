void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int	x[2];

	x[0] = 0;
	while (x[0] < 100)
	{
		x[1] = x[0] + 1;
		while (x[1] < 100)
		{
			ft_putchar(x[0] / 10 + '0');
			ft_putchar(x[0] % 10 + '0');
			ft_putchar(' ');
			ft_putchar(x[1] / 10 + '0');
			ft_putchar(x[1] % 10 + '0');
			if (!((x[0] == 98) && (x[1] == 99)))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			x[1]++;
		}
		x[0]++;
	}
}
