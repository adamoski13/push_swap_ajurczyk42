# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajurczyk <ajurczyk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/14 20:07:27 by ajurczyk          #+#    #+#              #
#    Updated: 2025/06/14 20:24:17 by ajurczyk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = $(addsuffix .c, main sort utils checks move_op/push_op move_op/swap_op move_op/rotate_op move_op/rev_rotate_op)

OBJ := $(SRC:%.c=%.o)

CC = gcc
CFLAGS = -Werror -Wall -Wextra
RM = rm -rf
LIB = -C libft

all: $(NAME)
$(NAME): $(OBJ)
	@make $(LIB)
	$(CC) $^ -Llibft -lft -o $(NAME)

libft:
	@make $(LIB)/

%.o: %.c
	$(CC) $(CCFLAGS) -Iincludes -Ilibft -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	make fclean $(LIB)/

re: fclean all

debug: $(OBJ)
	$(CC) $(CCFLAGS) -fsanitize=address -Llibft -lft $^ -o $(NAME)

.PHONY: libft test
