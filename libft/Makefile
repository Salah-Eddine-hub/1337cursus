# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbel-hou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/06 11:25:29 by hbel-hou          #+#    #+#              #
#    Updated: 2021/11/12 18:46:58 by sharrach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror 

SRCS = ft_isdigit.c ft_memset.c ft_strjoin.c  ft_isprint.c\
		ft_strlcat.c ft_substr.c  ft_atoi.c \
		ft_strlcpy.c ft_tolower.c ft_bzero.c ft_strlen.c\
		ft_toupper.c ft_calloc.c  ft_isalnum.c\
		ft_split.c ft_strncmp.c ft_isalpha.c ft_strchr.c\
		ft_strnstr.c ft_isascii.c ft_strdup.c ft_strrchr.c

#BONUS = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c\
#		ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c\
#		ft_strndup.c

OBJS = ${SRCS:.c=.o}

#OBJSBONUS = ${BONUS:.c=.o}

CC		= gcc
RM		= rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
		ar rcs ${NAME} ${OBJS}

bonus:	${OBJS} ${OBJSBONUS}
		ar rcs ${NAME} ${OBJS} ${OBJSBONUS}

all:	${NAME}

clean:
		${RM} ${OBJS} ${OBJSBONUS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all
rm:
	@rm -f *.o 
