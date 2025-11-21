/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <mcamach@student.42porto.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 15:14:19 by macamach          #+#    #+#             */
/*   Updated: 2025/10/09 18:20:04 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	n;

	n = 1;
	if (nb == 1)
		return (1);
	while (n <= nb / 2)
	{
		if (n * n == nb)
			return (n);
		n++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("sqrt(1)=%d\n", ft_sqrt(1));
	printf("sqrt(0)=%d\n", ft_sqrt(0));
	printf("sqrt(4)=%d\n", ft_sqrt(4));
	printf("sqrt(121)=%d\n", ft_sqrt(121));
	printf("sqrt(1000001)=%d\n", ft_sqrt(1000001));
	printf("sqrt(32035600)=%d\n", ft_sqrt(32035600));
	return (0);
}*/
