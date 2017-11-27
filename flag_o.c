/*
** EPITECH PROJECT, 2017
** flag_o.c
** File description:
** putnbrb
*/

#include "include/my.h"

void	flag_o(va_list ap)
{
	unsigned int	nb = va_arg(ap, unsigned int);

	my_putnbrb(nb, "01234567");
}
