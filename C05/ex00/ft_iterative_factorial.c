#include <stdio.h>

int ft_iterative_factorial(int nb)
{
	int	sum;

	sum = 1;
	if (nb < 0)
	{
		return (0);
	}
	while(nb > 0)
	{
		sum = (sum * nb);
		nb--;
	}
	return (sum);
}

/*
int main(void)
{
	printf("%d\n", ft_iterative_factorial(5));
}
*/
