/*
** EPITECH PROJECT, 2017
** flag_p.c
** File description:
** onestlafrerot
*/

#include "include/my.h"

void	flag_p(va_list ap)
{
	unsigned int	nb = va_arg(ap, unsigned int);
	
	my_putchar('0');
	my_putchar('x');
	my_putnbrb(nb,"0123456789abcdef");
}
