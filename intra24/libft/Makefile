# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vjacob <vjacob@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/01 12:17:34 by vjacob            #+#    #+#              #
#    Updated: 2020/11/04 14:58:33 by vjacob           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC			= ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
				ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c

OBJ			= $(SRC:.c=.o)

CC				= gcc

RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror 

NAME			= libft.a

all:			$(NAME)

$(NAME):		
				gcc $(CFLAGS) -c $(SRC) -I libft.h
				ar rc $(NAME) $(OBJ)
				ranlib $(NAME)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY: clean fclean all re