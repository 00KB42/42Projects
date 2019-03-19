# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kbrown <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/26 11:33:11 by kbrown            #+#    #+#              #
#    Updated: 2018/09/26 11:33:16 by kbrown           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -c -Wall -Werror -Wextra

SRC = ft_strlen.c ft_memset.c ft_strdup.c ft_strchr.c ft_strcmp.c ft_strcpy.c ft_strncpy.c ft_isdigit.c ft_toupper.c ft_tolower.c ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_putchar.c ft_putstr.c ft_putendl.c ft_putnbr.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_strcat.c ft_strlcat.c ft_strncat.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strstr.c ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c ft_strsplit.c ft_itoa.c ft_lstadd.c ft_lstdel.c ft_lstdelone.c ft_lstiter.c ft_lstmap.c ft_lstnew.c ft_div_to_zero.c ft_num_to_str.c ft_size_eval.c ft_wrd_ctr.c ft_wrd_len.c ft_trim_null.c

HDR = includes

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS)	$(SRC) -I$(HDR)
	ar rc $(NAME) *.o
	ranlib *.a

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
