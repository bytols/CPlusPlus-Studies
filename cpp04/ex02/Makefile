# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: erocha-l <erocha-l@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/08 22:52:37 by erocha-l          #+#    #+#              #
#    Updated: 2026/02/11 01:00:43 by erocha-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME =  AbsAnimal

FLAGS =-Wall	\
       -Werror  \
       -Wextra  \
	   -std=c++98 \

CC= c++

C_SOURCE= main.cpp Animal.cpp WrongAnimal.cpp Cat.cpp Dog.cpp WrongCat.cpp Brain.cpp

all: $(NAME)

$(NAME): $(C_SOURCE)
	$(CC) $(FLAGS) $(C_SOURCE) -o AbsAnimal

re: $(NAME)
	make fclean
	make all

clean:
	rm -rf $(NAME)

fclean:
	rm -rf $(NAME)

.PHONY: all clean fclean re