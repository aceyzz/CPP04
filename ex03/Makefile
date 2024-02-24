# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/24 09:42:45 by cedmulle          #+#    #+#              #
#    Updated: 2024/02/24 10:09:13 by cedmulle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= materia
SRC_DIR	= src/
INC_DIR	= inc/
SRC		= $(SRC_DIR)AMateria.cpp \
		  $(SRC_DIR)Character.cpp \
		  $(SRC_DIR)Cure.cpp \
		  $(SRC_DIR)Ice.cpp \
		  $(SRC_DIR)MateriaSource.cpp \
		  $(SRC_DIR)main.cpp
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
