# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/19 18:34:11 by mmardi            #+#    #+#              #
#    Updated: 2022/10/23 16:04:08 by mmardi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  Conversion

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp conversion.cpp

HEADER = conversion.hpp;

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