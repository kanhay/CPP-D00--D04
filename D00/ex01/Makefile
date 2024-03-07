# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/01 12:14:45 by khanhayf          #+#    #+#              #
#    Updated: 2023/12/01 18:17:01 by khanhayf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
FLAGS = -std=c++98 -Wall -Wextra -Werror
SRC = Phonebook.cpp Contact.cpp main.cpp
OBJ = Phonebook.o Contact.o main.o
CC = c++
HEAD = Phonebook.hpp Contact.hpp
RM = rm -rf

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ) 

%.o : %.cpp $(HEAD)
	$(CC) $(FLAGS) -c $<
	
clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all
