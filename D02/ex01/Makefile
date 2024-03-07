# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/02 20:35:14 by khanhayf          #+#    #+#              #
#    Updated: 2023/12/11 20:16:06 by khanhayf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = fixed
SRC = Fixed.cpp main.cpp
OBJ = Fixed.o main.o
CC = c++
CPPFLAGS = -std=c++98 -Wall -Wextra -Werror
HEAD = Fixed.hpp
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