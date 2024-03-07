# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/02 15:18:06 by khanhayf          #+#    #+#              #
#    Updated: 2023/12/06 20:23:52 by khanhayf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = weapon
SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJ = main.o Weapon.o HumanA.o HumanB.o
CC = c++
CPPFLAGS = -std=c++98 -Wall -Wextra -Werror
RM = rm -rf
HEAD = Weapon.hpp HumanA.hpp HumanB.hpp

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