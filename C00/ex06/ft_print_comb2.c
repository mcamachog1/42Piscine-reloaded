#include <unistd.h>

void ft_print_comb2(void)
{
	char	i;
	char	j;
	char	k;
	char	l;

	i = '0';
	while ( i <= '9')
	{	
		j = '0';
		while (j <= '9')
		{
			k = '0';
			while ( k <= '9' )
			{
				l = '0' ;
				while (l <= '9')
				{
					if (k > i || (k == i && l > j))
					{
						write(1, &i, 1);
						write(1, &j, 1);
						write(1, " ", 1);
						write(1, &k, 1);
						write(1, &l, 1);
						if (!(i == '9' && j == '8' && k == '9' && l == '9'))
							write(1, ", ", 2);
					}
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
}

int main(void)
{
	ft_print_comb2();
	return (0);
}
