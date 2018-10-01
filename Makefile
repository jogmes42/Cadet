# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jogomes <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/26 13:14:29 by jogomes           #+#    #+#              #
#    Updated: 2018/09/26 13:01:53 by jogomes          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -c -Wall -Werror -Wextra

SRC = *.c

HDR = includes

all: $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) $(SRC) -I$(HDR)
	@ar rc $(NAME) *.o

clean:
	@/bin/rm -rf *.o

fclean: clean
	@/bin/rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean re
