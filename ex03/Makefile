# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAkefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cedmulle <cedmulle@student.42lausanne.ch>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/12 11:03:09 by cedmulle          #+#    #+#              #
#    Updated: 2024/03/12 11:05:11 by cedmulle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= materia
SRC_DIR	= src/
INC_DIR = inc/
SRC		= $(SRC_DIR)main.cpp \
			$(SRC_DIR)AMateria.cpp \
			$(SRC_DIR)Character.cpp \
			$(SRC_DIR)Cure.cpp \
			$(SRC_DIR)Ice.cpp \
			$(SRC_DIR)MateriaSource.cpp
OBJ		= $(SRC:.cpp=.o)
CXX		= c++
CFL		= -Wall -Wextra -Werror -std=c++98 -I $(INC_DIR)
RM		= rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CFL) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CFL) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
