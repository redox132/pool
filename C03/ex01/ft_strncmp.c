#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
        int i;

        i = 0;
        while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
        {
                if (s1[i] != s2[i])
                {
                        return s1[i] - s2[i];
                }
                i++;
        }
        return 0;
}

int main()
{
        char s1[] = "hello";
        char s2[] = "hello world";

        int res = ft_strncmp(s1, s2, 7);

        printf("%d", res);
}
