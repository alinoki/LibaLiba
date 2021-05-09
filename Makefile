# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arichie <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/21 15:10:02 by arichie           #+#    #+#              #
#    Updated: 2021/04/21 15:10:07 by arichie          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_memset.c ft_atoi.c ft_bzero.c ft_memcpy.c \
ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c \
ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
ft_strlcpy.c ft_strlcat.c ft_strnstr.c ft_calloc.c \
ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
ft_itoa.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
ft_putnbr_fd.c

OBJECTS = ${SRCS:.c=.o}
CC = gcc
CFLAGS = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -I includes -c $< -o ${<:.c=.o}

${NAME}:	${OBJECTS}
			ar rc ${NAME} ${OBJECTS}
			ranlib ${NAME}

all:	$(NAME)

clean:
	rm -rf ${OBJECTS}

fclean:	clean
	rm -rf $(NAME)

re:	fclean all
