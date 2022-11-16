# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/03 01:09:07 by mmardi            #+#    #+#              #
#    Updated: 2022/10/24 19:41:43 by mmardi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Harl.cpp

HEADER = Harl.hpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)
%.o : %.cpp $(HEADER)
	c++ $(CFLAGS) -c -o $@ -c $<

$(NAME): $(OBJ)
	c++ $(CFLAGS) $(SRC) -o $(NAME)

clean:
	@rm -rf $(OBJ)
	
fclean: clean
	@rm -rf $(NAME)

re: fclean all