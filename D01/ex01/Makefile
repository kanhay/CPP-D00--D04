# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/01 19:57:37 by khanhayf          #+#    #+#              #
#    Updated: 2023/12/06 20:23:32 by khanhayf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie
SRC = Zombie.cpp main.cpp zombieHorde.cpp
OBJ = Zombie.o main.o zombieHorde.o
CC = c++
CPPFLAGS = -std=c++98 -Wall -Wextra -Werror
HEAD = Zombie.hpp
RM = rm -rf

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CPPFLAGS) -o $(NAME) $(OBJ) 

%.o : %.cpp $(HEAD)
	$(CC) $(CPPFLAGS) -c $<
	
clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all