# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/07 15:50:51 by khanhayf          #+#    #+#              #
#    Updated: 2023/12/14 10:25:25 by khanhayf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = scavTrap
SRC = ScavTrap.cpp ClapTrap.cpp main.cpp
OBJ = ScavTrap.o ClapTrap.o main.o
CC = c++
CPPFLAGS = -std=c++98 -Wall -Wextra -Werror
HEAD = ScavTrap.hpp ClapTrap.hpp
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