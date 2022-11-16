# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/15 17:29:17 by mmardi            #+#    #+#              #
#    Updated: 2022/10/03 16:07:44 by mmardi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Animal.cpp \
		Dog.cpp Cat.cpp Brain.cpp\
		WrongCat.cpp WrongAnimal.cpp


HEADER = Animal.hpp Dog.hpp \
		Cat.hpp WrongCat.hpp \
		WrongAnimal.hpp Brain.hpp

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