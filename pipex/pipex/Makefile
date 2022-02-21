# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sharrach <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/18 22:07:41 by sharrach          #+#    #+#              #
#    Updated: 2022/02/18 22:07:43 by sharrach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME =	pipex.a

HEADER =	pipex.h

SRCS =	ft_split.c\
		ft_strdup.c\
		ft_strlen.c\
		ft_substr.c\
		ft_strnstr.c\
		get_path.c\
		pipex.c\


OBJS = $(SRCS:.c=.o)

cc = gcc

CFLAGS = -Wall -Wextra -Werror

RM		= rm -f

$(NAME):	$(OBJS) $(HEADER)
		ar rcs $(NAME) $(OBJS)

all:	$(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re: fclean all

.PHONY:			all bonus clean fclean re