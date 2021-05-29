# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/03 15:52:53 by hmickey           #+#    #+#              #
#    Updated: 2021/05/29 11:55:21 by hmickey          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Brain

SRCS		=	Human.cpp Brain.cpp main.cpp

OBJS		= ${SRCS:.cpp=.o}

INCLUDE		=	Human.hpp Brain.hpp

CC			= clang++

RM			= rm -f

CPPFLAGS		= -Wall -Wextra -Werror 

.PHONY:			all clean fclean re

$(NAME):		${OBJS}
				${CC} -I. ${OBJS} -o $(NAME)

all:			${NAME}

clean:
				${RM} ${OBJS}

fclean:			clean
				${RM} ${NAME}

re:				fclean all