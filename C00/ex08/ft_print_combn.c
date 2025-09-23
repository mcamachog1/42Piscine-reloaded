#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_combinations(int n, int current_pos, int start_digit, int *combination)
{
	int	i;
	//int	first_number;

	if (current_pos == n)
	{
		i = 0;
		if ( start_digit > n )
			write(1, ", ", 2);
		while (i < n)
		{
			ft_putchar(combination[i] + '0');
			i++;
		}
		return;
	}
	i = start_digit;
	while (i <= 9)
	{
		combination[current_pos] = i;
		print_combinations(n, current_pos + 1, i + 1, combination);
		i++;
	}
}

void	ft_print_combn(int n)
{
	int combination[10];

	if (n < 1 || n > 9)
		return;
	print_combinations(n, 0, 0, combination);
}

int	main(void)
{
	ft_print_combn(1);
	write(1, "\n\n", 2);
	ft_print_combn(2);
	write(1, "\n\n", 2);
	ft_print_combn(8);
	write(1, "\n\n", 2);
	return (0);
}
