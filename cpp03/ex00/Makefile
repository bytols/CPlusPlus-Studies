# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/27 23:28:29 by erocha-l          #+#    #+#              #
#    Updated: 2026/02/07 14:57:08 by erocha-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  ClapTrap

FLAGS =-Wall	\
       -Werror  \
       -Wextra  \
	   -std=c++98 \

CC= c++

C_SOURCE= main.cpp ClapTrap.cpp

all: $(NAME)

$(NAME): $(C_SOURCE)
	$(CC) $(FLAGS) $(C_SOURCE) -o ClapTrap

re: $(NAME)
	make fclean
	make all

clean:
	rm -rf $(NAME)

fclean:
	rm -rf $(NAME)

.PHONY: all clean fclean re