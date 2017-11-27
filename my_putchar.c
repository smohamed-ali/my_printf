/*
** EPITECH PROJECT, 2017
** my_putchar.c
** File description:
** write
*/

#include "include/my.h"

void	my_putchar(char c)
{
	write(1, &c, 1);
}
