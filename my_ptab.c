/*
** EPITECH PROJECT, 2017
** my_ptab.c
** File description:
** onetwothree
*/

#include "include/my.h"

void	my_ptab(int i, va_list(ap))
{
	void (*tab[13])(va_list);

	tab[0] = &flag_d;
	tab[1] = &flag_i;
	tab[2] = &flag_u;
	tab[3] = &flag_o;
	tab[4] = &flag_x;
	tab[5] = &flag_gx;
	tab[6] = &flag_c;
	tab[7] = &flag_s;
	tab[8] = &flag_gs;
	tab[9] = &flag_b;
	tab[10] = &flag_p;
	tab[11] = &flag_mod;
	tab[12] = NULL;
	
	(*tab[i])(ap);
}
