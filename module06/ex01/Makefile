# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/24 22:41:40 by aes-salm          #+#    #+#              #
#    Updated: 2022/03/04 20:12:46 by aes-salm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= a.out
CC		= clang++
FLAGS 	= -Wall -Wextra -Werror -std=c++98
SRCS 	= main.cpp Data.cpp

$(NAME)	: 	$(SRCS)
			$(CC) $(FLAGS) $(SRCS) -o $(NAME)

all		: 	$(NAME)

clean	:
			@rm -rf *.o

fclean	: 	clean
			@rm -rf $(NAME)

re		: 	fclean all