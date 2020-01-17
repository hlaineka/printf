# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hlaineka <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/16 12:22:46 by hlaineka          #+#    #+#              #
#    Updated: 2020/01/16 12:22:48 by hlaineka         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf

SRCS = ft_printf.c print_s.c

OBJ = $(SRCS:.c=.o)

INC = ft_printf.h

all: $(NAME)

$(NAME):
	cd libft && make re
	gcc -c -Wall -Wextra -Werror $(SRCS) -I $(INC)
	gcc -Wall -Wextra -Werror -o $(NAME) $(OBJ) libft/libft.a

main:
	cd libft && make re
	gcc -c -Wall -Wextra -Werror main.c $(SRCS) -I $(INC)
	gcc -Wall -Wextra -Werror -o $(NAME) main.o $(OBJ) libft/libft.a

clean:
	cd libft && make clean
	rm -rf $(OBJ)
	rm -rf *~

fclean: clean
	cd libft && rm -rf libft.a
	rm -rf $(NAME)

re: fclean all
