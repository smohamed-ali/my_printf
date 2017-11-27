/*
** EPITECH PROJECT, 2017
** flag_s.c
** File description:
** my_putstr
*/

#include "include/my.h"

void	flag_s(va_list ap)
{
	my_putstr(va_arg(ap, char*));
}
