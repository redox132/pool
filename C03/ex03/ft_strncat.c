#include <stdio.h>

int ft_strlen(char *str)
{
        int     i;

        i = 0;
        while (str[i])
        {
                i++;
        }
        return i;
}

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
        int     i;
        int dest_len;

        dest_len = ft_strlen(dest);
        i = 0;
        while (i < nb && src[i] != '\0')
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

        ft_strncat(dest, src, 4);

        printf("the size of dest is: %d\n", ft_strlen(dest));
        printf("the content of dest is: %s\n", dest);
}




