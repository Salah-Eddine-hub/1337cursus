# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sharrach <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/09 12:16:17 by sharrach          #+#    #+#              #
#    Updated: 2021/12/09 12:16:20 by sharrach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf.a

HEADER = ft_printf.h

SRCS = ft_printf.c\

OBJS = $(SRCS:.c=.o)

cc = gcc

CFLAGS = -Wall -Wextra -Werror

RM		= rm -f

.c.o:
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
		ar rcs $(NAME) $(OBJS)

bonus:		$(OBJS)
			ar rcs $(NAME) $(OBJS)

all:	$(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re: fclean all
