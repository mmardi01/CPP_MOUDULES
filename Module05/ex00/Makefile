# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/03 14:22:24 by mmardi            #+#    #+#              #
#    Updated: 2022/11/04 14:29:59 by mmardi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  bureaucrat

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Bureaucrat.cpp

HEADER = Bureaucrat.hpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)
%.o: %.cpp $(HEADER)
	c++ $(CFLAGS)  -o $@  -c $<

$(NAME): $(OBJ)
	c++ $(CFLAGS) $(SRC) -o $(NAME)

clean:
	@rm -rf $(OBJ)
	
fclean: clean
	@rm -rf $(NAME)

re: fclean all