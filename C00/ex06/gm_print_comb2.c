#include <unistd.h>

void ft_print_comb2(void)
{
	int	num1;
	int	num2;
	int	flag_first_pair;

	flag_first_pair = 1;
	num1 = 0;
	while (num1 <= 99)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			if (!flag_first_pair)
				write(1, ", ", 2);
			write(1, &"0123456789"[num1 / 10], 1);
			write(1, &"0123456789"[num1 % 10], 1);
			write(1, " ", 1);
			write(1, &"0123456789"[num2 / 10], 1);
			write(1, &"0123456789"[num2 % 10], 1);
			num2++;
			flag_first_pair = 0;
		}
		num1++; 
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
