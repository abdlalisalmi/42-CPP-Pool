# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/24 22:41:40 by aes-salm          #+#    #+#              #
#    Updated: 2022/03/04 14:13:19 by aes-salm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= convert
CC		= clang++
FLAGS 	= -Wall -Wextra -Werror -std=c++98
SRCS 	= main.cpp utils.cpp

$(NAME)	: 	$(SRCS)
			$(CC) $(FLAGS) $(SRCS) -o $(NAME)

all		: 	$(NAME)

clean	:
			@rm -rf *.o

fclean	: 	clean
			@rm -rf $(NAME)

re		: 	fclean all