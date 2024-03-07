# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/01 18:14:18 by khanhayf          #+#    #+#              #
#    Updated: 2023/12/06 18:24:34 by khanhayf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie
SRC = Zombie.cpp main.cpp newZombie.cpp randomChump.cpp
OBJ = Zombie.o main.o newZombie.o randomChump.o
CC = c++
CPPFLAGS =  -Wall -Wextra -Werror -std=c++98
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