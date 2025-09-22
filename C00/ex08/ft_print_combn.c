#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_fact(int n)
{
	int	fact;

	if ( n < 0 )
		return (0);
	fact = 1;
	while ( n > 1 )
	{
		fact *= n;
		n--;
	}
	return (fact);
}


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

int	ft_size(int k)
{
	int	n;
	int	size;

	n = 10;
	size = ft_fact(n) / (ft_fact(n - k) * ft_fact(k));
	return (size);
}

int	*ft_combn(int n)
{
	int	size;
	int	i;
	int	j;
	int	k;
	int	*numbers;
	int	*previous_numbers;
	int	previous_size;

	size = ft_size(n);
	numbers = malloc(size * sizeof(int));
	printf("pass malloc\n");
	i = 0;
	j = 0;
	if (n == 1)
	{
		while (i < size)
		{
			numbers[i] = i;
			i++;
		}
	}
	if (n == 2)
	{
		previous_size = ft_size(n - 1);
		previous_numbers = ft_combn(n - 1); 
		i = 0;
		while ( i < previous_size )
		{
			k = 0;
			while (k <= 9 && j < size)
			{
				if ( k <= previous_numbers[i] )
					k = previous_numbers[i] + 1;
				numbers[j] = previous_numbers[i] * 10 + k;
				k++;
				j++;
			}
			i++;			
		}
	}
	return (numbers);
}

int	main(void)
{
	int	*numbers;
	int	i;
	int	size;
	int	n;
	int	first_number;

	first_number = 1;
	n = 2;
	i = 0;
	size = ft_size(n);
	printf("size: %d\n", size);
	numbers = ft_combn(n);
	printf("pass numbers");
	while (i < size)
	{	
		if (! first_number)
			write (1, ", ", 2);
		ft_putnbr(numbers[i]);
		i++;
		first_number = 0;	
	}
	write (1, "\n", 1);
	free(numbers);
	return (0);
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



