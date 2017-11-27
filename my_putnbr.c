/*
** EPITECH PROJECT, 2017
** my_putnbr.c
** File description:
** pouteneumbair
*/

#include "include/my.h"

void	my_putnbr(int nb)
{
	if (nb >= 0 && nb <= 9)
		my_putchar(nb + 48);
	if (nb < 0) {
		my_putchar('-');
		my_putnbr(nb * (-1));
	}
	if (nb > 9) {
		my_putnbr(nb / 10);
		my_putnbr(nb % 10);
	}
}
