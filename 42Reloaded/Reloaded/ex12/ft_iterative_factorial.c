/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <mcamach@student.42porto.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 09:42:47 by macamach          #+#    #+#             */
/*   Updated: 2025/10/08 15:08:01 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	while (nb > 0)
	{
		fact *= nb;
		nb--;
	}
	return (fact);
}

int	main(void)
{
	printf("fact(5)= %d\n", ft_iterative_factorial(5));
	printf("fact(0)= %d\n", ft_iterative_factorial(0));
	printf("fact(8)= %d\n", ft_iterative_factorial(8));
	return (0);
}
