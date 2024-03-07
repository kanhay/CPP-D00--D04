# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/04 20:08:07 by khanhayf          #+#    #+#              #
#    Updated: 2023/12/06 20:24:56 by khanhayf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harlFilter
SRC = main.cpp Harl.cpp
OBJ = main.o Harl.o
CC = c++
CPPFLAGS = -std=c++98 -Wall -Wextra -Werror
RM = rm -rf
HEAD = Harl.hpp

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