# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajurczyk <ajurczyk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/29 14:37:05 by ajurczyk          #+#    #+#              #
#    Updated: 2025/01/02 23:51:10 by ajurczyk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = $(addsuffix .c, ft_isalpha ft_isdigit ft_isascii ft_isprint \
ft_isalnum ft_toupper ft_tolower ft_strchr ft_strrchr \
ft_strlen ft_strncmp ft_memset ft_bzero ft_striteri\
ft_memchr ft_memcpy ft_memcmp ft_memmove ft_strmapi\
ft_strlcpy ft_strnstr ft_strlcat ft_atoi ft_itoa\
ft_calloc ft_strdup ft_substr ft_strjoin ft_strtrim ft_split\
ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd)
OBJS := $(SRCS:%.c=%.o)

NAME = libft.a
CC = gcc
RM = rm -f
ARNAME = ar rcs $(NAME)
RLNAME = ranlib $(NAME)
CCFLAGS = -Wall -Wextra -Werror

all: $(NAME)
$(NAME): $(OBJS)
	$(ARNAME) $(OBJS)
	$(RLNAME)
%.o: %.c
	$(CC) $(CCFLAGS) -c $< -o $@
clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)
re: fclean all
.PHONY: clean fclean re all