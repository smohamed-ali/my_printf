/*
** EPITECH PROJECT, 2017
** checkflag.c
** File description:
** checkflag.c
*/

#include "include/my.h"

int checkflag(char c)
{
	int	i = 0;
	char	str[13] = "diuoxXcsSbp%";

	while (str[i] != '\0') {
		if (str[i] == c)
			return (i);
		i = i + 1;
	}
	return (-1);
}
