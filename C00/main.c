#include <unistd.h>
#include <stdio.h>
#include "ft_exercises.h"

int main(void)
{

    printf("\n-----------------------------------------------------------------------------------------\n");
    ft_print_alphabet();
    printf("\n-----------------------------------------------------------------------------------------\n");
    ft_print_reverse_alphabet();
    printf("\n-----------------------------------------------------------------------------------------\n");
    ft_print_numbers();
    printf("\n-----------------------------------------------------------------------------------------\n");
    ft_is_negative(-1);
    printf("\n-----------------------------------------------------------------------------------------\n");
    ft_is_negative(0);
    printf("\n-----------------------------------------------------------------------------------------\n");
    ft_is_negative(5);
    printf("\n-----------------------------------------------------------------------------------------\n");
    ft_print_comb();
    printf("\n-----------------------------------------------------------------------------------------\n");
    ft_print_comb2();
 
    printf("\n ------------------------------ ft_putnbr -----------------------------------------------------------\n");
    ft_putnbr(2147483647);
    printf("\n ------------------------------ ft_putnbr -----------------------------------------------------------\n");
    ft_putnbr(-2147483648);
    printf("\n ------------------------------ ft_putnbr -----------------------------------------------------------\n");
    ft_putnbr(123456);
    printf("\n ------------------------------ ft_putnbr -----------------------------------------------------------\n");
    ft_putnbr(0);
    printf("\n ------------------------------ ft_putnbr -----------------------------------------------------------\n");
    ft_putnbr(-42);
    printf("\n ------------------------------ ft_putnbr -----------------------------------------------------------\n");
    return (0);
}
