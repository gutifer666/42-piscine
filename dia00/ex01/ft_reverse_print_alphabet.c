void ft_putchar(char c);

void ft_reverse_print_alphabet(void)
{
	char c;
	c = 'z';
	while(c >= 'a')
	{
		ft_putchar(c);
		c--;
	}
}
