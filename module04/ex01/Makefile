# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/29 16:27:57 by aes-salm          #+#    #+#              #
#    Updated: 2022/01/22 12:22:13 by aes-salm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	a.out
CC		= 	clang++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
SRCS	=	main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp

$(NAME)	:	$(SRCS)
			$(CC) $(FLAGS) $(SRCS)

all		:	$(NAME)

clean	:
			@rm -rf $(NAME)

fclean	:	clean

re		:	fclean all