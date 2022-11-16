# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/11 21:08:56 by mmardi            #+#    #+#              #
#    Updated: 2022/11/11 21:27:04 by mmardi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =   MutantStack

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp

HEADER = MutantStack.hpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME) 

%.o: %.cpp  $(HEADER)
	c++ $(CFLAGS) -o $@  -c $<

$(NAME): $(OBJ)
	c++ $(CFLAGS) $(SRC) -o $(NAME)

clean:
	@rm -rf $(OBJ)
	
fclean: clean
	@rm -rf $(NAME)

re: fclean all