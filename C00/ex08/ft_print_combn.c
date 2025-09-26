#include <unistd.h>

int	ft_fact(int n)
{
	int	fact;

	if (n < 0)
		return (0);
	fact = 1;
	while (n > 1)
	{
		fact *= n;
		n--;
	}
	return (fact);
}

void	ft_increment(char *num, int pos, int n)
{
	int	max_val;

	max_val = (10 - n + pos) + '0';
	if (num[pos] == max_val)
		ft_increment(num, pos - 1, n);
	else
	{
		num[pos] = num[pos] + 1;
		pos++;
		while (pos < n)
		{
			num[pos] = num[pos - 1] + 1;
			pos++;
		}
	}
}

void	ft_print_combn(int n)
{
	char	num[n + 1];
	int	i;
	int	numcomb;

	if (n < 1 || n > 9)
		return ;
	i = 0;
	while (i < n)
	{
		num[i] = i + '0';
		i++;
	}
	write(1, num, n);
	numcomb = ft_fact(10) / (ft_fact(10 - n) * ft_fact(n));
	while (numcomb-- > 1)
	{
		write(1, ", ", 2);
		ft_increment(num, n - 1, n);
		write(1, num, n);
	}
}

/*
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	int	size;

	if (argc != 2)
		return (1);
	size = atoi(argv[1]);
	ft_print_combn(size);
	write (1, "\n", 1);
	return (0);	
}
*/
