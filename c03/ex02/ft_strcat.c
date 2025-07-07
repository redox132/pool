#include <stdio.h>

int ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return i;
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int dest_len;

	dest_len = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[dest_len] = src[i];
		i++;
		dest_len++;
	}

	dest[dest_len] = '\0';
	return dest;
}

int main(void)
{
	char dest[1024] = "hello";
	char src[] = " world";

	ft_strcat(dest, src);

	printf("the size of dest is: %d\n", ft_strlen(dest));
	printf("the content of dest is: %s\n", dest);
}
