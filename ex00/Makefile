# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/23 08:43:48 by cedmulle          #+#    #+#              #
#    Updated: 2024/02/23 09:44:15 by cedmulle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= animal
SRC_DIR	= src/
INC_DIR	= inc/
SRC		= $(SRC_DIR)main.cpp \
			$(SRC_DIR)Animal.cpp \
			$(SRC_DIR)Dog.cpp \
			$(SRC_DIR)Cat.cpp \
			$(SRC_DIR)WrongAnimal.cpp \
			$(SRC_DIR)WrongDog.cpp \
			$(SRC_DIR)WrongCat.cpp
OBJ		= $(SRC:.cpp=.o)
CXX		= c++
CFL		= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CFL) -I $(INC_DIR) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CFL) -I $(INC_DIR) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
