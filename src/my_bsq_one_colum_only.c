/*
** EPITECH PROJECT, 2017
** ne_my_bsq_one_colum_only
** File description:
** my_bsq
*/

#include "my.h"

void my_bsq_one_colum_only(char *buffer, int k)
{
	int i = k + 1;
	int count = 0;

	k = k + 1;
	while (count < 1 && buffer[k]) {
		if (buffer[k] == '.') {
			buffer[k] = 'x';
			count = count + 1;
		}
		k++;
	}
	while (buffer[i]) {
		my_putchar(buffer[i]);
		i++;
	}
}
