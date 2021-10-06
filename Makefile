# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antton-t <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/28 14:20:06 by antton-t          #+#    #+#              #
#    Updated: 2021/10/06 15:40:59 by antton-t         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fdf
CC = clang
HEAD = -I./includes
CFLAGS = -Wall -Wextra -Werror -g3 -fsanitize=address
FILES = main.c\

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

DIR_ADD =  \

DIR_UTILS =  \

OBJ = $(FILES:.c=.o) \
			$(DIR_PARSE:.c=.o) \
			$(DIR_ADD:.c=.o) \
			$(DIR_UTILS:.c=.o) \

all :   $(NAME)

$(NAME) : $(OBJ) ./includes/ft_fdf.h
		$(CC) $(CFLAGS) $(HEAD) $(OBJ) -o  ${NAME}

.c.o:
		$(CC) $(CFLAGS) $(HEAD) -c $< -o $@

$(OBJ_DIR)/%.o: %.c
clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)
re: fclean all
