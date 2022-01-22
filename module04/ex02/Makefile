# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/28 14:36:32 by aes-salm          #+#    #+#              #
#    Updated: 2022/01/22 20:24:54 by aes-salm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	a.out
CC		= 	clang++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
SRCS	=	main.cpp Animal.cpp Dog.cpp Cat.cpp

$(NAME)	:	$(SRCS)
			$(CC) $(FLAGS) $(SRCS)

all		:	$(NAME)

clean	:
			@rm -rf $(NAME)

fclean	:	clean

re		:	fclean all