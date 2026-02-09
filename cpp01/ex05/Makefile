# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/10 18:24:23 by erocha-l          #+#    #+#              #
#    Updated: 2026/01/20 19:46:05 by erocha-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  loneZombie

FLAGS =-Wall	\
       -Werror  \
       -Wextra  \
	   -std=c++98 \

CC= c++

C_SOURCE= main.cpp Zombie.cpp

all: $(NAME)

$(NAME): $(C_SOURCE)
	$(CC) $(FLAGS) $(C_SOURCE) -o loneZombie

re: $(NAME)
	make fclean
	make all

clean:
	rm -rf $(NAME)

fclean:
	rm -rf $(NAME)

.PHONY: all clean fclean re