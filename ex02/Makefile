# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/24 04:59:29 by kpuwar            #+#    #+#              #
#    Updated: 2023/12/25 22:05:35 by kpuwar           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=  Bureaucracy

CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

CLASSES		= Bureaucrat AForm ShrubberyCreationForm RobotomyRequestForm PresidentialPardonForm
INCLUDES	= $(addsuffix .hpp, $(CLASSES))
SRCS		= main.cpp $(addsuffix .cpp, $(CLASSES))
OBJS		= ${SRCS:.cpp=.o}

RM			= rm -rf

$(NAME): $(SRCS) $(OBJS) $(INCLUDES)
			$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

all: $(NAME)

clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	$(RM) *_shrubbery

re: fclean all
