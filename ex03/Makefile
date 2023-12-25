# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/24 04:59:29 by kpuwar            #+#    #+#              #
#    Updated: 2023/12/26 00:56:03 by kpuwar           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=  Intern

CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

CLASSES		= Bureaucrat AForm ShrubberyCreationForm RobotomyRequestForm PresidentialPardonForm Intern
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

re: fclean all
