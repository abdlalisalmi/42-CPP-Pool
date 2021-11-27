# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/24 12:11:37 by aes-salm          #+#    #+#              #
#    Updated: 2021/11/27 11:58:28 by aes-salm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= megaphone
CC		= clang++
FLAGS 	= -Wall -Wextra -Werror -std=c++98
SRCS 	= megaphone.cpp

$(NAME)	: 	$(SRCS)
			$(CC) $(FLAGS) $(SRCS) -o $(NAME)

all		: 	$(NAME)

clean	:
			@rm -rf *.o

fclean	: 	clean
			@rm -rf megaphone

re		: 	fclean all
