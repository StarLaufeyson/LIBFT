# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eluno-la <eluno-la@student.42urduliz.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/04 18:53:03 by eluno-la          #+#    #+#              #
#    Updated: 2023/05/15 17:47:21 by eluno-la         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
	   ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	   ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
	   ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strdup.c ft_strnstr.c ft_substr.c \
	   ft_strjoin.c ft_strtrim.c ft_itoa.c ft_strmapi.c ft_striteri.c \
	   ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_calloc.c \
	   ft_putnbr_fd.c ft_split.c \

OBJECTS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) -r $@ $?

%.o: %.c
	$(CC) -c $(CFLAGS) $?

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
