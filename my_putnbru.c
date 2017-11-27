/*
** EPITECH PROJECT, 2017
** my_putnbru.c
** File description:
** putnbru
*/

#include "include/my.h"

void	my_putnbru(unsigned int nb)
{
	unsigned int	i = 1;

	while ((nb / i) >= 10)
		i = i * 10;
	while (i != 0) {
		my_putchar((nb / i) % 10 + 48);
			i = i / 10;
	}
}
