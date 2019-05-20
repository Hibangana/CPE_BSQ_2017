/*
** EPITECH PROJECT, 2017
** my_get_number_of_colums
** File description:
** my_bsq
*/

#include "my.h"

int my_get_number_of_colums(char *buffer, int k)
{
	int nb = 0;
	int k_mem = k;

	while (buffer[k] != '\n')
		k++;
	nb = k - k_mem;
	return (nb);
}
