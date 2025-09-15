#include <unistd.h>

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	if (nb > 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
		return ;
	}
	write(1, &"0123456789"[nb], 1);
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
