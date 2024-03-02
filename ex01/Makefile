# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/27 11:55:00 by fabou-za          #+#    #+#              #
#    Updated: 2022/12/27 18:31:41 by fabou-za         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ScavTrap
CFLAGS = -Wall -Werror -Wextra -std=c++98
CC = c++

SRC_NAME =	main.cpp ClapTrap.cpp ScavTrap.cpp

HEADERS = ClapTrap.hpp ScavTrap.hpp

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
