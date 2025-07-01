#include <stdio.h>

int ft_strlen(char *str);


int main ()
{
	char str[] = "this is a string";
	printf("%d", ft_strlen(str));
}

int ft_strlen(char *str)
{
	int count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}

	return count;
}
