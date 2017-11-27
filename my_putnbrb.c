/*
** EPITECH PROJECT, 2017
** my_putnbrb.c
** File description:
** putnbrb
*/

#include "include/my.h"

void	my_putnbrb(unsigned int nb, char *base)
{
	int	div = 1;
	int	res;
	int	i = 0;

	while (base[i] != '\0')
		i = i + 1;
	while ((nb / div) >= i)
		div = div * i;
	while (div > 0) {
		res = (nb / div % i);
		my_putchar(base[res]);
		div = div / i;
	}
}
