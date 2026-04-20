# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sihasima <sihasima@student.42antananari    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/23 13:06:29 by sihasima          #+#    #+#              #
#    Updated: 2026/03/06 10:13:11 by sihasima         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_putchar.c ft_strlen.c ft_putnbr_base.c ft_putnbr.c\
ft_putptr.c ft_putstr.c ft_putunbr.c ft_printf.c\

OBJS = $(SRCS:.c=.o)

all: $(NAME)

HEADER=ft_printf.h

$(NAME): $(OBJS) $(HEADER)
		ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re








