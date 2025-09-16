#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	n;

	n = nb;
	if (n < 0)
	{
		n = -n;
		write(1, "-", 1);
	}
	if (n >= 10)
		ft_putnbr(n / 10);
	write(1, &"0123456789"[n % 10], 1);
}

#include <stdlib.h>

int	main(int argc, char *argv[])
{
	if (argc != 2)
		return (1);
	ft_putnbr(atoi(argv[1]));
	write(1, "\n", 1);
	return (0);
}
