#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;
	i = 0;
	while (str[i])
		i++;
	return i;
}

int	is_valid_base(char *base)
{
	int	i;
	int	j;
	
	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ' || (base[i] >= 9 && base[i] <= 13))
			return 0;
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return 0;
			j++;
		}
		i++;
	}
	return 1;
}

int	get_value(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return i;
		i++;
	}
	return -1;
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	result;
	int	digit_value;
	int	base_len;
	
	i = 0;
	sign = 1;
	result = 0;
	base_len = ft_strlen(base);
	if (!is_valid_base(base))
		return 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while ((digit_value = get_value(str[i], base)) != -1)
	{
		result = result * base_len + digit_value;
		i++;
	}
	return (result * sign);
}


int main(void)
{
    printf("%d\n", ft_atoi_base("101010", "01"));            // 42
    printf("%d\n", ft_atoi_base("5E", "0123456789ABCDEF")); // -42
    printf("%d\n", ft_atoi_base("+52", "01234567"));         // 42
    printf("%d\n", ft_atoi_base("42", "0123456789"));        // 42
    printf("%d\n", ft_atoi_base("   +--+101", "01"));        // -5
    printf("%d\n", ft_atoi_base("123", "0123456789"));        // 0 (invalid char A in base 10)
}

