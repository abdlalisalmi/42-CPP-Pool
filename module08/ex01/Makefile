# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/20 11:19:17 by aes-salm          #+#    #+#              #
#    Updated: 2022/03/20 11:52:17 by aes-salm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	span
CC		= 	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
SRCS	=	main.cpp Span.cpp

$(NAME)	:	$(SRCS)
			$(CC) $(FLAGS) $(SRCS) -o $(NAME)

all		:	$(NAME)

clean	:
			@rm -rf $(NAME)

fclean	:	clean

re		:	fclean all