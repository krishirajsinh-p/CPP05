# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/24 04:59:29 by kpuwar            #+#    #+#              #
#    Updated: 2023/12/24 16:05:14 by kpuwar           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Bureaucrat

CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

INCLUDES	= Bureaucrat.hpp
SRCS		= main.cpp Bureaucrat.cpp
OBJS		= ${SRCS:.cpp=.o}

RM			= rm -rf

$(NAME): $(SRCS) $(OBJS) $(INCLUDES)
			$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

all: $(NAME)

clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
	