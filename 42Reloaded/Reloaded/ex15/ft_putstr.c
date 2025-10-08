void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int	main()
{
	ft_putstr("Hola");
	ft_putstr(" String2");
	return (0);
}
