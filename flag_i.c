/*
** EPITECH PROJECT, 2017
** flag_i.c
** File description:
** my_putnbr
*/

#include "include/my.h"

void flag_i(va_list ap)
{
	my_putnbr(va_arg(ap, int));
}
