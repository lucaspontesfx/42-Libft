# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lucda-si <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/21 12:06:42 by lucda-si          #+#    #+#              #
#    Updated: 2024/10/22 19:12:49 by lucda-si         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
LIB = ar rcs
RM = rm -f

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
      ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memmove.c \
      ft_strlcpy.c ft_putendl_fd.c ft_putnbr_fd.c ft_memcpy.c \
      ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strlcat.c \
      ft_strncmp.c ft_atoi.c ft_putchar_fd.c ft_putstr_fd.c ft_memchr.c \
      ft_strnstr.c  ft_calloc.c ft_strdup.c ft_substr.c \

SRC_OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(SRC_OBJ)
	$(LIB) $(NAME) $(SCR_OBJ)

clean:
	$(RM) $(SRC_OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
