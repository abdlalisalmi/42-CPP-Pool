# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/24 12:58:36 by aes-salm          #+#    #+#              #
#    Updated: 2021/11/24 13:12:07 by aes-salm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= phonebook
CC		= clang++
FLAGS	= -Wall -Wextra -Werror
SRCS	= phonebook.cpp

$(NAME) : 	$(SRCS)
			$(CC) $(FLAGS) $(SRCS) -o $(NAME)

all		: 	$(NAME)

clean	:
			@rm -rf *.o

fclean	: 	clean
			@rn -rf $(NAME)

re		: 	fclean all