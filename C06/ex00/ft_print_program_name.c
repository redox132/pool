#include <unistd.h>

int main(int arc, char **argv)
{
	int	i;

	i = 0;

	while (argv[0][i])
	{
		write(1, &argv[0][i], 1);
		i++;
	}
	write(1, "\n", 1);
}
