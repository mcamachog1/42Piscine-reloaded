/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <mcamach@student.42porto.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 15:08:50 by macamach          #+#    #+#             */
/*   Updated: 2025/10/08 15:12:52 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

int	main(void)
{
	printf("fact(5)= %d\n", ft_recursive_factorial(5));
	printf("fact(0)= %d\n", ft_recursive_factorial(0));
	printf("fact(8)= %d\n", ft_recursive_factorial(8));
	return (0);
}
