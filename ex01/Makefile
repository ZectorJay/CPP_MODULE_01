# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/03 15:52:53 by hmickey           #+#    #+#              #
#    Updated: 2021/05/24 16:26:02 by hmickey          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	MemoryLeak

SRCS		=	MemoryLeak.cpp

OBJS		= ${SRCS:.cpp=.o}

INCLUDE		=	

CC			= clang++

RM			= rm -f

CPPFLAGS		= -Wall -Wextra -Werror 

.PHONY:			all clean fclean re

$(NAME):		${OBJS}
				${CC} ${OBJS} -o $(NAME)

all:			${NAME}

clean:
				${RM} ${OBJS}

fclean:			clean
				${RM} ${NAME}

re:				fclean all