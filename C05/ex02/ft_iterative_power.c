#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
	int	i;
	int	sum;

	i = 0;
	sum = 1;

	if (power < 0)
	{
		return 0;
	}
	if (power == 0 && nb == 0)
	{
		return 1;
	}
	while (power > i)
	{
		sum = sum * nb;
		i++;
	}
	return sum;
}

/*
int main()
{
	printf("%d\n", ft_iterative_power(5, 5));
}
*/
