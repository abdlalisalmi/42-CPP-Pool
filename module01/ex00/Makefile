# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/26 22:39:08 by aes-salm          #+#    #+#              #
#    Updated: 2021/12/01 12:54:53 by aes-salm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= 	zombie
CC		=	clang++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
SRCS	= 	main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

$(NAME)	: 	$(SRCS)
			$(CC) $(FLAGS) $(SRCS)

all		: 	$(NAME)

clean	:
			@rm -rf *.o

fclean	: 	clean
			@rm -rf a.out

re		:	fclean all