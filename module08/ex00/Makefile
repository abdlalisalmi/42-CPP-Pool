# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/10 13:54:35 by aes-salm          #+#    #+#              #
#    Updated: 2022/03/14 12:24:47 by aes-salm         ###   ########.fr        #
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