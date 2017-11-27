/*
** EPITECH PROJECT, 2017
** flag_X.c
** File description:
** putnbrb
*/

#include "include/my.h"

void	flag_gx(va_list ap)
{
	unsigned int	nb = va_arg(ap, unsigned int);

	my_putnbrb(nb, "0123456789ABCDEF");
}
