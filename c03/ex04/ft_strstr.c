#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	while(str[i])
	{
		j = 0;
		while (str[i])
		{
			if (str[i] == to_find[i])
			{
				return &str[i];
			}
			j++;
		i++;
		}
	}
}

int main(void)
{
	char str[] = "hello world!";
	char to_find[] = "ld";

	printf("%s", ft_strstr(str, to_find));
}
