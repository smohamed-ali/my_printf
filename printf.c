/*
** EPITECH PROJECT, 2017
** my_printf.c
** File description:
** ted
*/

#include "include/my.h"

int	my_printf(char *str, ...)
{
	int	i = 0;
	va_list ap;

	va_start(ap, 0);

	while(str[i] != '\0') {
		if (str[i] == '%' && (checkflag(str[i + 1]) != -1)) {
			my_ptab(checkflag(str[i + 1]), ap);
			i = i + 2;
		}
		else {
			my_putchar(str[i]);
			i = i + 1;
		}
	}
	va_end(ap);
	return (0);
}
