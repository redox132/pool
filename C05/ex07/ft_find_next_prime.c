#include <stdio.h>

int ft_is_prime(int n)
{
    if (n < 2)
        return 0;

    int i = 2;
    while (i * i <= n)
    {
        if (n % i == 0)
            return 0;
        i++;
    }
    return 1;
}

int ft_find_next_prime(int nb)
{
    int candidate = nb;

    if (candidate < 2)
        candidate = 2;

    while (!ft_is_prime(candidate))
    {
        candidate++;
    }
    return candidate;
}

