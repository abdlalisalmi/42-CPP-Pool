# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/06 19:33:04 by aes-salm          #+#    #+#              #
#    Updated: 2022/03/06 19:53:33 by aes-salm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	a.out
CC		= 	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
SRCS	=	main.cpp

$(NAME)	:	$(SRCS)
			$(CC) $(FLAGS) $(SRCS)

all		:	$(NAME)

clean	:
			@rm -rf $(NAME)

fclean	:	clean

re		:	fclean all