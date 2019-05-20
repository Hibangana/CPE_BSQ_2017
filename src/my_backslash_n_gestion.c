/*
** EPITECH PROJECT, 2017
** my_backslash_n_gestion
** File description:
** my_bsq
*/

#include "my.h"

int my_backslash_n_gestion(int k, char *buffer)
{
	if (buffer[k] == '\n')
		k++;
	return (k);
}
