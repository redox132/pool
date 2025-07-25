#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;

    if (*to_find == '\0')
        return str;

    i = 0;
    while (str[i] != '\0')
    {
        j = 0;
        while (str[i + j] != '\0' && to_find[j] != '\0' && str[i + j] == to_find[j])
        {
            j++;
        }
        if (to_find[j] == '\0')
            return &str[i];
        i++;
    }
    return 0;
}


int main(void)
{
	char str[] = "hello world!";
	char to_find[] = "lo
		;

	printf("%s", ft_strstr(str, to_find));
}
