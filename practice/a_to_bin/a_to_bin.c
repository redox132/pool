#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

void	a_to_bin(int nbr, char *base)
{
	int	i;
	int	j;
	int 	quotient;
	int	base_len;
	char	buffer[35];

	i = 0;
	base_len = ft_strlen(base);
	quotient = nbr;
	j = 0;
	while (quotient != 0)
	{
		buffer[i++] = base[quotient % base_len];
		quotient = quotient / base_len;
	}
	
	while (i-- > 0)
	{
		write(1, &buffer[i], 1);
	}
}

int main(void)
{
	a_to_bin(42, "01");
}



