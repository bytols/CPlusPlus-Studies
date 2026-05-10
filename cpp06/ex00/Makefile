# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/29 16:13:15 by erocha-l          #+#    #+#              #
#    Updated: 2026/05/06 00:37:47 by erocha-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 	ScalarConverter

FLAGS =-Wall	\
       -Werror  \
       -Wextra  \
	   -std=c++98 \

CC= g++

C_SOURCE= main.cpp ScalarConverter.cpp
all: $(NAME)

$(NAME): $(C_SOURCE)
	$(CC) $(FLAGS) $(C_SOURCE) -o ScalarConverter

re: fclean all

clean:
	rm -rf $(NAME)

fclean:
	rm -rf $(NAME)

.PHONY: all clean fclean re