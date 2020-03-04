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

NAME = libftprintf.a

SRCS = ft_printf.c print_s.c print_c.c print_p.c print_x.c print_d.c print_u.c print_o.c \
print_f.c

OBJ = $(SRCS:.c=.o)

LIBFT_SRCS = libft/ft_itoa.c libft/ft_putchar.c libft/ft_putchar_fd.c \
libft/ft_putendl.c libft/ft_putendl_fd.c libft/ft_putnbr.c libft/ft_putnbr_fd.c \
libft/ft_putstr.c libft/ft_putstr_fd.c libft/ft_strcpy.c libft/ft_strdup.c \
libft/ft_strlen.c libft/ft_memset.c libft/ft_bzero.c libft/ft_memcpy.c \
libft/ft_memccpy.c libft/ft_memmove.c libft/ft_memcmp.c libft/ft_strncpy.c \
libft/ft_strcat.c libft/ft_memchr.c libft/ft_strncat.c libft/ft_strlcat.c \
libft/ft_strchr.c libft/ft_strrchr.c libft/ft_strstr.c libft/ft_strnstr.c \
libft/ft_strcmp.c libft/ft_strncmp.c libft/ft_atoi.c libft/ft_isalpha.c \
libft/ft_isdigit.c libft/ft_isalnum.c libft/ft_isascii.c libft/ft_isprint.c \
libft/ft_toupper.c libft/ft_tolower.c libft/ft_memalloc.c libft/ft_memdel.c \
libft/ft_strnew.c libft/ft_strdel.c libft/ft_strclr.c libft/ft_striter.c \
libft/ft_striteri.c libft/ft_strmap.c libft/ft_strmapi.c libft/ft_is_whitespace.c \
libft/ft_define_length.c  libft/ft_strequ.c libft/ft_strnequ.c libft/ft_strsub.c \
libft/ft_strjoin.c libft/ft_strtrim.c libft/ft_strsplit.c libft/ft_addstr.c \
libft/ft_lstnew.c libft/ft_lstdelone.c libft/ft_lstdel.c libft/ft_lstadd.c \
libft/ft_lstiter.c libft/ft_lstmap.c libft/ft_strpaste.c libft/ft_strset.c \
libft/ft_itoa_base.c libft/get_next_line.c \
libft/ft_str_realloc.c libft/ft_dynamic_string.c \
libft/ft_strjoin_frees2.c libft/ft_strpaste_digits.c libft/ft_char_str_join.c \
libft/ft_strsub_freestr.c

LIBFT_OBJ = ft_itoa.o ft_putchar.o ft_putchar_fd.o ft_putendl.o ft_putendl_fd.o \
ft_putnbr.o ft_putnbr_fd.o ft_putstr.o ft_putstr_fd.o ft_strcpy.o ft_strdup.o \
ft_strlen.o ft_memset.o ft_bzero.o ft_memcpy.o ft_memccpy.o ft_memmove.o \
ft_memcmp.o ft_strncpy.o ft_strcat.o ft_memchr.o ft_strncat.o ft_strlcat.o \
ft_strchr.o ft_strrchr.o ft_strstr.o ft_strnstr.o ft_strcmp.o ft_strncmp.o \
ft_atoi.o ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o \
ft_toupper.o ft_tolower.o ft_memalloc.o ft_memdel.o ft_strnew.o ft_strdel.o \
ft_strclr.o ft_striter.o ft_striteri.o ft_strmap.o ft_strmapi.o ft_is_whitespace.o \
ft_define_length.o ft_strequ.o ft_strnequ.o ft_strsub.o ft_strjoin.o ft_strtrim.o \
ft_strsplit.o ft_addstr.o ft_lstnew.o ft_lstdelone.o ft_lstdel.o ft_lstadd.o \
ft_lstiter.o ft_lstmap.o ft_strpaste.o ft_strset.o ft_itoa_base.o \
get_next_line.o ft_str_realloc.o ft_dynamic_string.o ft_strjoin_frees2.o \
ft_strpaste_digits.o ft_char_str_join.o ft_strsub_freestr.o

INC = ft_printf.h

INC_LIBFT = libft/libft.h

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRCS) $(LIBFT_SRCS) ft_printf.h libft/libft.h
	ar rc $(NAME) $(OBJ) $(LIBFT_OBJ)

main: re
	gcc main.c -o test libftprintf.a
	make clean

main_string: re
	gcc mainft.c -o stringft libftprintf.a
	gcc mainpf.c -o stringpf libftprintf.a
	make clean

main_hex: re
	gcc main_hexft.c -o hexft libftprintf.a
	gcc main_hexpf.c -o hexpf libftprintf.a
	make clean

main_int: re
	gcc main_intft.c -o intft libftprintf.a
	gcc main_intpf.c -o intpf libftprintf.a
	make clean

compare:
	gcc compare.c -o compare libftprintf.a

clean:
	cd libft && make clean
	cd libft && rm -rf *.o
	rm -rf $(OBJ)
	rm -rf *.o 
	rm -rf *~

fclean: clean
	cd libft && rm -rf libft.a
	rm -rf *.o 
	rm -rf ft_printf
	rm -rf $(NAME)

re: fclean all
