# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/05 13:25:16 by aes-salm          #+#    #+#              #
#    Updated: 2021/12/05 13:29:04 by aes-salm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	=	a.out
CC		=	clang++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
SRCS	=	main.cpp Fixed.cpp

$(NAME)	=	$(SRCS)
			$(CC) $(FLAGS) $(SRCS) -o $(NAME)

all		:	$(NAME)

clean	:
			@rm -rf $(NAME)

fclean	:	clean

re		:	fclean all