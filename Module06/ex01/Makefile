# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/23 16:27:39 by mmardi            #+#    #+#              #
#    Updated: 2022/10/23 21:10:39 by mmardi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  Serialization

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Data.cpp

HEADER = Data.hpp

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