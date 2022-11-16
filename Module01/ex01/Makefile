# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/24 14:58:29 by mmardi            #+#    #+#              #
#    Updated: 2022/10/24 19:39:21 by mmardi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp zombieHorde.cpp Zombie.cpp

HEADER = Zombie.hpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)
%.o: %.cpp $(HEADER)
	c++ $(CFLAGS) -c -o $@  -c $<

$(NAME): $(OBJ)
	c++ $(CFLAGS) $(SRC) -o $(NAME)

clean:
	@rm -rf $(OBJ)
	
fclean: clean
	@rm -rf $(NAME)

re: fclean all