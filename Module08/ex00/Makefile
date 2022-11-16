# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/25 17:43:45 by mmardi            #+#    #+#              #
#    Updated: 2022/10/25 17:46:34 by mmardi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =   Easyfind

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp 

HEADER = easyfind.hpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)
%.o: %.cpp 
	@c++ $(CFLAGS) -c -o $@  -c $<
		@echo Compiling...

$(NAME): $(OBJ) $(HEADER)
	@c++ $(CFLAGS) $(SRC) -o $(NAME)
		@echo Compilation finshed

clean:
	@rm -rf $(OBJ)
	
fclean: clean
	@rm -rf $(NAME)

re: fclean all