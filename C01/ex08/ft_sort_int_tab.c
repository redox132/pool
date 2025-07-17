#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int main()
{
	int tab[] = {1,8,4,6,9};
	int size = sizeof(tab) / sizeof(tab[0]);

	ft_sort_int_tab(tab, size);


	for (int i = 0; i < size; i++)
	{
		printf("%d", tab[i]);
	}
}

void ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int temp;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}

