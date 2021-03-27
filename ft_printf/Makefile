# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/22 11:11:10 by aalcara-          #+#    #+#              #
#    Updated: 2021/03/27 18:43:33 by aalcara-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIBFT = libft.a

LIBFT_PATH = ./libft/
FTP = ft_printf

FILES = $(FTP).c specifier_flags.c reset_flags.c $(FTP)_char.c $(FTP)_str.c $(FTP)_percent.c \
	$(FTP)_integer.c $(FTP)_hexadecimal.c ft_hexa_atoi.c

OBJ = ft_printf.o specifier_flags.o reset_flags.o ft_printf_char.o ft_printf_str.o ft_printf_percent.o \
	ft_printf_integer.o ft_printf_hexadecimal.o ft_hexa_atoi.o

CC =clang
FLAGS = -Wall -Wextra -Werror
RE = rm -f

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT_PATH)
	make -C $(LIBFT_PATH) $(LIBFT)
	cp $(LIBFT_PATH)$(LIBFT) .
	mv $(LIBFT) $(NAME)
	ar -rcs $(NAME) $(OBJ)

$(OBJ): $(FILES)
	$(CC) $(FLAGS) -c $(FILES)

clean:
	$(RE) $(OBJ)

fclean: clean
	$(RE) $(NAME)

re: fclean all

.PHONY: all clean fclean re
