#include <stdio.h>


void ft_rev_int_tab(int *tab, int size);

int main ()
{
	int tab[] = {1,3,5,7,9};
	int size = sizeof(tab) / sizeof(tab[0]);

	ft_rev_int_tab(tab,size);

	for (int i = 0; i < size; i++) 
	{
		printf("%d", tab[i]);
	}
}

void ft_rev_int_tab(int *tab, int size)
{
	int firstIndex = 0;
	int lastIndex = size -1;


	int temp;

	while (firstIndex < lastIndex)
	{
		
		temp = tab[firstIndex];
		tab[firstIndex] = tab[lastIndex];
		tab[lastIndex] = temp;

		firstIndex++;
		lastIndex--;
	}	
}






