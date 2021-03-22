# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/06 21:35:57 by aalcara-          #+#    #+#              #
#    Updated: 2021/03/22 20:52:56 by aalcara-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_calloc.c ft_isascii.c ft_memccpy.c ft_memcpy.c ft_strchr.c ft_strlcpy.c ft_strnstr.c ft_toupper.c \
		ft_atoi.c ft_isalnum.c ft_isdigit.c ft_memchr.c ft_memmove.c ft_strdup.c ft_strlen.c ft_strrchr.c \
		ft_bzero.c ft_isalpha.c ft_isprint.c ft_memcmp.c ft_memset.c ft_strlcat.c ft_strncmp.c ft_tolower.c \
		ft_strjoin.c ft_substr.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c \
		ft_putendl_fd.c ft_putnbr_fd.c ft_putstr.c ft_putchr.c ft_hexa_len.c ft_num_len.c

OBJ = ft_calloc.o ft_isascii.o ft_memccpy.o ft_memcpy.o ft_strchr.o ft_strlcpy.o ft_strnstr.o ft_toupper.o \
		ft_atoi.o ft_isalnum.o ft_isdigit.o ft_memchr.o ft_memmove.o ft_strdup.o ft_strlen.o ft_strrchr.o \
		ft_bzero.o ft_isalpha.o ft_isprint.o ft_memcmp.o ft_memset.o ft_strlcat.o ft_strncmp.o ft_tolower.o \
		ft_strjoin.o ft_substr.o ft_strtrim.o ft_split.o ft_itoa.o ft_strmapi.o ft_putchar_fd.o ft_putstr_fd.o \
		ft_putendl_fd.o ft_putnbr_fd.o ft_putstr.o ft_putchr.o ft_hexa_len.o ft_num_len.o

FLAGS = -Wall -Wextra -Werror

all:	$(NAME)

$(NAME): $(SRCS) libft.h
		gcc $(FLAGS) -c $(SRCS)
		ar rc $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re:	fclean all
