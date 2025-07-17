#!/bin/bash

gcc -Wall -Wextra -Werror \
    ex00/ft_putchar.c \
    ex01/ft_print_alphabet.c \
    ex02/ft_print_reverse_alphabet.c \
    ex03/ft_print_numbers.c \
    ex04/ft_is_negative.c \
    ex05/ft_print_comb.c \
    ex06/ft_print_comb2.c \
    ex07/ft_putnbr.c \
    main.c \
    -o all_exercises
