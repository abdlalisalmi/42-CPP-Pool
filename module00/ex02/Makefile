# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/25 13:35:11 by aes-salm          #+#    #+#              #
#    Updated: 2021/11/27 12:04:07 by aes-salm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= 	account
CC 		= 	clang++
FLAGS	= 	-Wall -Wextra -Werror -std=c++98
SRCS	= 	tests.cpp Account.cpp


$(NAME) : 	$(SRCS)
			$(CC) $(FLAGS) $(SRCS) -o $(NAME)

all 	: 	$(NAME)

clean	:
			@rm -rf *.o

fclean	: 	clean
			@rm -rf $(NAME)

re		: 	fclean all
