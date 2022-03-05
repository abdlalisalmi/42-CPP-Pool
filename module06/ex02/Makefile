# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aes-salm <aes-salm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/05 12:07:50 by aes-salm          #+#    #+#              #
#    Updated: 2022/03/05 12:23:32 by aes-salm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= a.out
CC		= clang++
FLAGS 	= -Wall -Wextra -Werror -std=c++98
SRCS 	= main.cpp Base.cpp A.cpp B.cpp C.cpp functions.cpp

$(NAME)	: 	$(SRCS)
			$(CC) $(FLAGS) $(SRCS) -o $(NAME)

all		: 	$(NAME)

clean	:
			@rm -rf *.o

fclean	: 	clean
			@rm -rf $(NAME)

re		: 	fclean all