void	ft_putchar(char c);

void	ft_print_digits(char digit_1, char digit_2, char digit_3)
{
	ft_putchar(digit_1);
	ft_putchar(digit_2);
	ft_putchar(digit_3);
	if (!(digit_1 == 7 && digit_2 == 8 && digit_3 == 9))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	digit_1;
	char	digit_2;
	char	digit_3;

	digit_1 = '0';
	digit_2 = '0';
	digit_3 = '0';
	while (digit_1 <= '9')
	{
		digit_2 = digit_1 + 1;
		while (digit_2 <= '9')
		{
			digit_3 = digit_2 + 1;
			while (digit_3 <= '9')
			{
				ft_print_digits(digit_1, digit_2, digit_3);
				digit_3++;
			}
			digit_2++;
		}
		digit_1++;
	}
}
