# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/22 18:21:14 by mmardi            #+#    #+#              #
#    Updated: 2022/09/03 17:04:54 by mmardi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CFLAGS = -Wall -Wextra -Werror -std=c++98

FILES = main.cpp contact.cpp phonebook.cpp

HEADER = phonebook.hpp contact.hpp

OBJ = $(FILES:.cpp=.o)

all: $(NAME) 

%.o: %.cpp $(HEADER)
	@c++ $(CFLAGS) -c -o $@  -c $<
		@echo Compiling... 

$(NAME): $(OBJ)
	@c++ $(CFLAGS) $(FILES) -o $(NAME)
		@echo Compilation finished
clean:
	@rm -rf $(OBJ)
	
fclean: clean
	@rm -rf $(NAME)

re: fclean all