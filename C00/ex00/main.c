void ft_putchar(char c);

int	main(int argc, char *argv[])
{
	if (argc != 2)
		return 0;
	ft_putchar(argv[1][0]);
	ft_putchar('\n');
}
