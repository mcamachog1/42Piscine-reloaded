/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macamach <mcamach@student.42porto.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 11:37:33 by macamach          #+#    #+#             */
/*   Updated: 2025/10/09 11:59:17 by macamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*dup;

	if (src == NULL)
		return (NULL);
	i = 0;
	len = ft_strlen(src);
	dup = malloc((len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	while (i < len)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*
int	main(void)
{
	char	*dup1;
	char	*dup2;
	char	*dup3;
	char	*dup4;

	dup1 = ft_strdup("Hola");
	dup2 = ft_strdup(" String2");
	dup3 = ft_strdup("");
	dup4 = ft_strdup(NULL);
	printf("dup1=%s, dup2=%s, dup3=%s, dup4=%s\n", dup1, dup2, dup3, dup4);
	free(dup1);
	free(dup2);
	free(dup3);
	return (0);
}*/
