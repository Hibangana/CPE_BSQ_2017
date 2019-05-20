/*
** EPITECH PROJECT, 2017
** my_h
** File description:
** my_h_bsq
*/

#ifndef MY_H_
#define MY_H_

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "my_printf.h"
struct stock
{
	int stock_nb;
	int x_pos;
	int y_pos;
	int y;
	int x;
};
typedef struct stock my_t;
int my_backslash_n_gestion(int k, char* buffer);
void my_bsq_one_colum_only(char *buffer, int k);
char **my_square_filler(int x, int y, int stock, char **str);
int my_comparator(int first_value, int second_value, int topleft_val);
void my_array_finder(char **str, int **array, int colums, int lines);
int my_get_number_of_lines(char *buffer, int k);
int my_get_number_of_colums(char *buffer, int k);
void my_array_creator(char *buffer, int count);
int my_bsq_error_check(int ac, char **av);
long my_get_file_size(char *av);
int my_bsq(long size, char *av);
char **my_array_filler(char *buffer, char **str, int colums, int lines);
void my_array_printer(char **str,int lines, int colums);
void my_bsq_one_line_only(char *buffer, int k);
int my_array_one_line(char *buffer, int k);
int **my_first_colum_filler(int colums, char **str, int **array);
int **my_first_line_filler(int lines, char **str, int **array);
int **my_dot_case_array(int y, int x, int **array, char **str);
my_t my_max_value(my_t my_struct, int** array);
int my_getnbr(char const *str);
char **my_square_looper(my_t my_struct, char **str);
#endif
