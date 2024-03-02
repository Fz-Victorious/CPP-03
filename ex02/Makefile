# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/27 11:55:00 by fabou-za          #+#    #+#              #
#    Updated: 2022/12/27 18:36:13 by fabou-za         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = FragTrap
CFLAGS = -Wall -Werror -Wextra -std=c++98
CC = c++

SRC_NAME =	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

HEADERS = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp

OBJ_NAME = $(SRC_NAME:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ_NAME)
	$(CC) $^ -o $@

%.o: %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJ_NAME)
fclean: clean
	rm -rf $(NAME)
re: fclean all
