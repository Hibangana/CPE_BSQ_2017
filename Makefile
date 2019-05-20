##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## my_bsk_makefile
##

SRC	=	src/my_pf/my_putstr.c			\
		src/my_pf/put_hexa_cap.c		\
		src/my_pf/case_cap_c.c			\
		src/my_pf/case_cap_s.c			\
		src/my_pf/case_check.c			\
		src/my_pf/my_printf.c			\
		src/my_pf/my_put_nbr_binary.c		\
		src/my_pf/my_put_nbr.c			\
		src/my_pf/my_put_nbr_unsigned.c		\
		src/my_pf/my_strlen.c			\
		src/my_pf/put_hexa_for_long.c		\
		src/my_pf/put_hexa_or_oct.c		\
		src/my_pf/removespace.c			\
		src/my_pf/testspacepresence.c		\
		src/my_pf/my_putchar.c			\
		src/main.c				\
		src/my_bsq_error_check.c		\
		src/my_bsq.c				\
		src/my_get_file_size.c			\
		src/my_array_creator.c			\
		src/my_get_number_of_colums.c		\
		src/my_get_number_of_lines.c		\
		src/my_array_filler.c			\
		src/my_array_printer.c			\
		src/my_array_finder.c			\
		src/my_comparator.c			\
		src/my_square_filler.c			\
		src/my_array_one_line.c			\
		src/my_bsq_one_colum_only.c		\
		src/my_bsq_one_line_only.c		\
		src/my_first_filling.c			\
		src/my_conditional_adder.c		\
		src/my_backslash_n_gestion.c		\
		src/my_getnbr.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Wall -Wextra -I./include

NAME	=	bsq

all: $(NAME)

$(NAME): $(OBJ)
	ar rc libmy.a $(OBJ)
	gcc -o $(NAME) $(OBJ) -I./include

clean:
	rm -rf $(OBJ)	\
	rm *~

fclean: clean
	rm -rf $(NAME)	\
	rm  *~		\
	rm *.a

re: fclean all

.PHONY: all clean fclean re
