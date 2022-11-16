# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/23 21:09:25 by mmardi            #+#    #+#              #
#    Updated: 2022/10/23 21:17:30 by mmardi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =   realtype

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Base.cpp

HEADER = Base.hpp A.hpp B.hpp C.hpp

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