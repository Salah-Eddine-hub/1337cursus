# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/18 22:07:41 by sharrach          #+#    #+#              #
#    Updated: 2022/02/28 13:45:13 by sharrach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME =	pipex

HEADER =	pipex.h

SRCS =	ft_split.c\
		ft_strdup.c\
		ft_strlen.c\
		ft_strjoin.c\
		ft_substr.c\
		ft_strnstr.c\
		ft_free.c\
		split_paths.c\
		add_cmd_path.c\
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