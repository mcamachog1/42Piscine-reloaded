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

void	ft_print_combn(int n)
{
	int	i;
	int	j;
	int	m;
	int	num1;
	int	num2;

	i = 0;
	m = 0;
	if (n > 9 || n < 1)
	{
		write(1, "Parameter Error\n", 16);
		return ; 
	}
	while ( i < n )
	{
		m = 10 * m + 9;
		i++;
	}
	if (n == 1)
		ft_putnbr(n);
	else //if (n == 2)
	{
		num1 = 0;
		while (num1 <= m / 10)
		{
			num2 = num1 + 1;
			while (num2 <= 9)
			{
				write(1, ", ", 2);
				ft_putnbr(num1);
				ft_putnbr(num2);
				num2++;
			}
			num1++;
		}
	}
}

int	main(void)
{
	ft_print_combn(3);
	write (1, "\n", 1);
	return (0);
}


