# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/15 17:29:17 by mmardi            #+#    #+#              #
#    Updated: 2022/09/16 13:55:37 by mmardi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Claptrack

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp

HEADER = ClapTrap.hpp ScavTrap.hpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)
%.o: %.cpp $(HEADER)
	@c++ $(CFLAGS) -c -o $@  -c $<
		@echo Compiling...

$(NAME): $(OBJ)
	@c++ $(CFLAGS) $(SRC) -o $(NAME)
		@echo Compilation finshed

clean:
	@rm -rf $(OBJ)
	
fclean: clean
	@rm -rf $(NAME)

re: fclean all