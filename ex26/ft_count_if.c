/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <mcamach@student.42porto.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 09:27:16 by macamach          #+#    #+#             */
/*   Updated: 2025/10/10 10:08:47 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) == 1)
			count++;
		i++;
	}
	return (count);
}
/*
int	ft_strlen_less_than_five(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	if (i < 5)
		return (1);
	return (0);
}

int	main(void)
{
	char	*tab[] = {"Mariana", "Pedro", "Jose", "Luis", 0};

	printf("%d\n", ft_count_if(tab, &ft_strlen_less_than_five));
}*/
