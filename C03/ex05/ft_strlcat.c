#include <stdio.h>

unsigned int ft_strlen(char *str)
{
    unsigned int i = 0;
    while (str[i])
        i++;
    return (i);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int dest_len = ft_strlen(dest);
    unsigned int src_len = ft_strlen(src);
    unsigned int i = 0;

    // No room to concatenate anything
    if (dest_len >= size)
        return size + src_len;

    // Copy as much as will fit (up to size - dest_len - 1)
    while (src[i] && dest_len + i < size - 1)
    {
        dest[dest_len + i] = src[i];
        i++;
    }

    // Null-terminate the result
    dest[dest_len + i] = '\0';

    return dest_len + src_len;
}


int main(void)
{
	char dst[] = "Hello, ";
	char src[] = "world!";
	size_t size = sizeof(dst);

	int result = ft_strlcat(dst, src, size);

	printf("%d\n", result);
	printf("%s\n", dst);

	printf("%zu\n", size);
}
