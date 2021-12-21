# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/21 22:26:14 by aes-salm          #+#    #+#              #
#    Updated: 2021/12/21 22:26:42 by aes-salm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	=	a.out
CC		=	clang++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
SRCS	=	main.cpp ClapTrap.cpp

$(NAME)	:	$(SRCS)
			$(CC) $(FLAGS) $(SRCS)

all		:	$(NAME)

clean	:
			@rm -rf $(NAME)

fclean	:	clean

re		:	fclean all