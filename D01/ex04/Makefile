# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/02 18:10:19 by khanhayf          #+#    #+#              #
#    Updated: 2023/12/07 15:10:38 by khanhayf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replacer
SRC = main.cpp ft_replace.cpp
OBJ = main.o ft_replace.o
CC = c++
CPPFLAGS = -std=c++98 -Wall -Wextra -Werror
RM = rm -rf
HEAD = rep.hpp

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