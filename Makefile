# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antton-t <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/28 14:20:06 by antton-t          #+#    #+#              #
#    Updated: 2021/10/13 12:29:25 by antton-t         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fdf
CC = clang
HEAD = -I./includes
CFLAGS = -Wall -Wextra -Werror -g3 -fsanitize=address
LDFLAGS = -framework OpenGL -framework Appkit
FILES = main.c
ENVI = $(shell uname -s)

DIR_PARSE =	srcs/ft_check.c \
			srcs/ft_get_next_line.c \
			srcs/ft_strlen.c \
			srcs/ft_strjoin.c \
			srcs/ft_substr.c \
			srcs/ft_strdup.c \
			srcs/ft_strchr.c \
			srcs/ft_parse.c \
			srcs/ft_atoi.c \
			srcs/ft_check_error.c \
			srcs/ft_memset.c \
			srcs/ft_calloc.c \
			srcs/ft_init.c \
			srcs/ft_init_map.c \
			srcs/ft_execute_mlx.c \

OBJ = $(FILES:.c=.o) \
			$(DIR_PARSE:.c=.o) \

all :   $(NAME)

#ifeq ($(ENVI), Darwin)
#	MLX_DIR = ./minilibx_macos \
#	MLX = libmlx.a

$(NAME) : $(OBJ) ./includes/ft_fdf.h
		make -C minilibx_macos
		$(CC) $(CFLAGS)  $(LDFLAGS) $(HEAD) $(OBJ) -o  ${NAME} minilibx_macos/libmlx.a

.c.o:
		$(CC) $(CFLAGS) $(HEAD) -c $< -o $@

$(OBJ_DIR)/%.o: %.c
clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
