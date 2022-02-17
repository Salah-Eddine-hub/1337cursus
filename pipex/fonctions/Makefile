# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sharrach <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/10 12:02:14 by sharrach          #+#    #+#              #
#    Updated: 2022/02/10 12:02:15 by sharrach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = pipex.a

HEADER = pipex.h

SRCS =	

OBJS = $(SRCS:.c=.o)

BONUS = 

OBJSBONUS = $(BONUS:.c=.o)

CC		=	cc

CFLAGS	=	-Wall -Wextra -Werror

RM		= 	rm -f

.c.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS) $(HEADER)
			ar rcs $@ $^

bonus:		$(OBJS) $(OBJSBONUS)
			ar rcs $(NAME) $^

all:		$(NAME)

clean:
			$(RM) $(OBJS) $(OBJSBONUS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all
