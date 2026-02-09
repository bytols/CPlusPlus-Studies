# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/27 23:28:29 by erocha-l          #+#    #+#              #
#    Updated: 2026/02/02 00:55:33 by erocha-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  Fixed

FLAGS =-Wall	\
       -Werror  \
       -Wextra  \
	   -std=c++98 \

CC= c++

C_SOURCE= main.cpp Fixed.cpp

all: $(NAME)

$(NAME): $(C_SOURCE)
	$(CC) $(FLAGS) $(C_SOURCE) -o Fixed

re: $(NAME)
	make fclean
	make all

clean:
	rm -rf $(NAME)

fclean:
	rm -rf $(NAME)

.PHONY: all clean fclean re