# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/18 22:07:41 by sharrach          #+#    #+#              #
#    Updated: 2022/03/02 16:20:34 by sharrach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME =	pipex

HEADER =	pipex.h

SRCS =	Tools_libft.c\
		Tools_libft2.c\
		paths.c\
		utils.c\
		pipex.c
		


OBJS = $(SRCS:.c=.o)

cc = gcc

CFLAGS = -Wall -Wextra -Werror

RM		= rm -f

.c.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS) $(HEADER)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all:	$(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re: fclean all

.PHONY:			all bonus clean fclean re