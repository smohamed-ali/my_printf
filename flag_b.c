/*
** EPITECH PROJECT, 2017
** flag_b.c
** File description:
** putnbrb
*/

#include "include/my.h"

void	flag_b(va_list ap)
{
	unsigned int	nb = va_arg(ap, unsigned int);

	my_putnbrb(nb, "01");
}
