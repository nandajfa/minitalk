# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jefernan <jefernan@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/07 20:44:37 by jefernan          #+#    #+#              #
#    Updated: 2022/04/01 21:55:52 by jefernan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minitalk

CLIENT = client
SERVER = server

CC		=  gcc
CFLAGS	= -Wall -Wextra -Werror 

RM			= rm -rf
MKDIR		= mkdir -p

LIBFT = ./libft/libft.a

HEADER		 = $(SRCS_DIR)

SRCS_DIR  = ./src
SRCS_CLIENT = ./src/client.c
SRCS_SERVER = ./src/server.c

OBJ_DIR = ./objs
OBJS_CLIENT = ./objs/client.o
OBJS_SERVER = ./objs/server.o

$(OBJ_DIR)/%.o:		$(SRCS_DIR)/%.c 
					mkdir -p $(OBJ_DIR)
					$(CC) $(CFLAGS) -I $(HEADER) -c $< -o $@

${NAME}: all

all: $(LIBFT) $(CLIENT) $(SERVER)

$(CLIENT): $(OBJS_CLIENT)
	$(CC) $(CFLAGS) $(OBJS_CLIENT) $(LIBFT) -o $(CLIENT) 

$(SERVER): $(OBJS_SERVER)
	$(CC) $(CFLAGS) $(OBJS_SERVER) $(LIBFT) -o $(SERVER)

${LIBFT}:
			make -C ./libft

clean:
		make clean -C ./libft
			${RM} ${OBJ_DIR}

fclean:	clean
			make fclean -C ./libft
			${RM} $(CLIENT) $(SERVER)
			
re:		fclean all

.PHONY: all clean fclean re val

