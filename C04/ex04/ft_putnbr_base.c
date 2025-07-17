#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	is_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (ft_strlen(base) <= 1)
		return 0;

	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
		{
			return (0);
		}

		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

void ft_putnbr_base(int nbr, char *base)
{
    int base_len;
    long nb;
    char buffer[35];
    int i = 0;

    if (!is_valid_base(base))
        return;

    base_len = ft_strlen(base);
    nb = nbr;

    if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }

    if (nb == 0)
    {
        ft_putchar(base[0]);
        return;
    }

    while (nb > 0)
    {
        buffer[i++] = base[nb % base_len];
        nb /= base_len;
    }

    while (i-- > 0)
        ft_putchar(buffer[i]);
}

/*
int main(void)
{
	ft_putnbr_base(-123, "0123456789ABCDEF");
}
*/
