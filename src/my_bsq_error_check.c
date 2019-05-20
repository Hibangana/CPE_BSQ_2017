/*
** EPITECH PROJECT, 2017
** my_bsq_error_check
** File description:
** my_bsq
*/

#include "my.h"

int my_bsq_error_check(int ac, char **av)
{
	int fd = open(av[1], O_RDONLY);

	if (fd == -1)
		return (84);
	close(fd);
	if (ac != 2)
		return (84);
	av = av;
	return (0);
}
