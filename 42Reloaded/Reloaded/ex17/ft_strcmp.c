#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	main(void)
{
	printf("%s vs %s\n result = %d\n", "Hola", "Hola", ft_strcmp("Hola", "Hola"));
	printf("%s vs %s\n result = %d\n", "ABC", "AB", ft_strcmp("ABC", "AB"));
	printf("%s vs %s\n result = %d\n", "12", "123", ft_strcmp("12", "123"));
}
