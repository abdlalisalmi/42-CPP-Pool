# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/02 16:06:25 by aes-salm          #+#    #+#              #
#    Updated: 2021/12/02 16:08:22 by aes-salm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= 	cpp
CC		=	clang++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
SRCS	= 	main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

$(NAME)	: 	$(SRCS)
			$(CC) $(FLAGS) $(SRCS)

all		: 	$(NAME)

clean	:
			@rm -rf *.o

fclean	: 	clean
			@rm -rf a.out

re		:	fclean all