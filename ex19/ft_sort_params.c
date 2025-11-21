/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <mcamach@student.42porto.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 09:05:18 by macamach          #+#    #+#             */
/*   Updated: 2025/10/09 13:33:09 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_swap(char **arr, int j)
{
	char	*temp;

	temp = arr[j];
	arr[j] = arr[j +1];
	arr[j + 1] = temp;
}

void	ft_sort_strings(char *arr[], int n)
{
	int		j;

	j = 1;
	while (j < n - 1)
	{
		if (ft_strcmp(arr[j], arr[j + 1]) > 0)
		{
			ft_swap(arr, j);
			j = 0;
		}
		j++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	ft_sort_strings(argv, argc);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
