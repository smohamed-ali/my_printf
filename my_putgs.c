/*
** EPITECH PROJECT, 2017
** my_putgs.c
** File description:
** poutneumbairzaireau
*/

#include "include/my.h"

void	my_putgs(char *str)
{
	int	i = 0;

	while (str[i] != '\0') {
		if (str[i] < 32 || str[i] > 126) {
			my_putchar('\\');
			my_putzero(str[i]);
			my_putnbrb(str[i], "01234567");
		}
		else
			my_putchar(str[i]);
		i = i + 1;
	}
}
