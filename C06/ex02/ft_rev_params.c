#include <unistd.h>

void ft_putstr(char *str)
{
    while (*str)
        write(1, str++, 1);
}

int main(int argc, char **arrg)
{
    int i = argc - 1;

    while (i > 0)
    {
        ft_putstr(arrg[i]);
        write(1, "\n", 1);
        i--;
    }
    return 0;
}

