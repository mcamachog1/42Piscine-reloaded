/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <mcamach@student.42porto.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 12:00:35 by macamach          #+#    #+#             */
/*   Updated: 2025/10/09 12:17:22 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	n;
	int	i;
	int	*arr;

	if (min >= max)
		return (NULL);
	n = max - min;
	arr = malloc(n * sizeof(int));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
/*
int	main(void)
{
	int	*numbers;
	int	min;
	int	max;
	int	i;

	min = 2;
	max = 12;
	numbers = ft_range(min, max);
	i = 0;
	while (i < max - min)
	{
		printf("num=%d\n", numbers[i]);
		i++;
	}
	free(numbers);
	return (0);
}*/
