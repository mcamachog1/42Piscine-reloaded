#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(void)
{
	printf("%s: strlen=%d", "Hola", ft_strlen("Hola")); 
	printf("%s: strlen=%d", " String 2", ft_strlen(" String 2")); 
	return (0);
}
