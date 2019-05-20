/*
** EPITECH PROJECT, 2017
** my_comparator
** File description:
** my_bsq
*/

#include "my.h"

int my_comparator(int up, int left, int up_left)
{
	if (up < left && up < up_left)
		return (up + 1);
	if (left < up_left)
		return (left + 1);
	return (up_left + 1);
}
