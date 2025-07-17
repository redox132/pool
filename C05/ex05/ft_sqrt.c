#include <stdio.h>
#include <math.h>

int ft_sqrt(int nb)
{
    int i;

    if (nb < 0)
        return (0);
    if (nb == 0 || nb == 1)
        return (nb);

    i = 1;
    while (i <= nb / i)  // prevent overflow
    {
        if (i * i == nb)
            return (i);
        i++;
    }
    return (0);
}

/*
int main()
{
	printf("%d\n", ft_sqrt(25));
	printf("%f\n", sqrt(25));
}
*/
