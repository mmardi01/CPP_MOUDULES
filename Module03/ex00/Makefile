# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/15 17:29:17 by mmardi            #+#    #+#              #
#    Updated: 2022/09/15 17:32:33 by mmardi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Claptrack

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp ClapTrap.cpp

HEADER = ClapTrap.hpp

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