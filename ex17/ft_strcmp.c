/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <mcamach@student.42porto.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 18:12:29 by macamach          #+#    #+#             */
/*   Updated: 2025/10/09 18:21:27 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
int	main(void)
{
	printf("%s vs %s\n result = %d\n", "Ho", "Ho", ft_strcmp("Ho", "Ho"));
	printf("%s vs %s\n result = %d\n", "ABC", "AB", ft_strcmp("ABC", "AB"));
	printf("%s vs %s\n result = %d\n", "12", "123", ft_strcmp("12", "123"));
}*/
