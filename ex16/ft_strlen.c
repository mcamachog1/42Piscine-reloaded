/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <mcamach@student.42porto.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 18:11:36 by macamach          #+#    #+#             */
/*   Updated: 2025/10/09 18:11:48 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
int	main(void)
{
	printf("%s: strlen=%d", "Hola", ft_strlen("Hola")); 
	printf("%s: strlen=%d", " String 2", ft_strlen(" String 2")); 
	return (0);
}*/
