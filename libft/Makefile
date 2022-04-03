# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jefernan <jefernan@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/31 10:43:14 by jefernan          #+#    #+#              #
#    Updated: 2021/12/06 09:45:04 by jefernan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
CC		=	clang
CFLAGS	=	-Wall -Wextra -Werror
AR		=	ar
ARFLAGS	=	rcs

SRCS	= 	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
			ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c \
			ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c \
			ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strnstr.c ft_strrchr.c \
			ft_strncmp.c ft_tolower.c ft_toupper.c ft_itoa.c ft_putchar_fd.c \
			ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c \
			ft_striteri.c ft_strjoin.c ft_strmapi.c ft_strtrim.c ft_substr.c \
			ft_uitoa.c ft_printf.c ft_print_d_i.c

OBJS	= ${SRCS:.c=.o}
RM		=	rm -f

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${AR} ${ARFLAGS} ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY: 	all clean fclean re
