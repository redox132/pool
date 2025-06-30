#include <unistd.h>

void ft_put_digit(char d)
{
    write(1, &d, 1);
}

void ft_print_pair(int n)
{
    char tens;
    char ones;

    tens = (n / 10) + '0';
    ones = (n % 10) + '0';
    ft_put_digit(tens);
    ft_put_digit(ones);
}

void ft_print_comb2(void)
{
    int a;
    int b;

    a = 0;
    while (a <= 98)
    {
        b = a + 1;
        while (b <= 99)
        {
            ft_print_pair(a);
            write(1, " ", 1);
            ft_print_pair(b);
            if (!(a == 98 && b == 99))
                write(1, ", ", 2);
            b++;
        }
        a++;
    }
}

