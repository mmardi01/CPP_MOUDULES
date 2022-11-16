# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/26 17:44:18 by mmardi            #+#    #+#              #
#    Updated: 2022/10/27 21:05:39 by mmardi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  Sed_is_for_losers



FILES = main.cpp replace_file.cpp replace_line.cpp

HEADER = replace.hpp

OBJ = $(FILES:.cpp=.o)

all: $(NAME) 

%.o: %.cpp $(HEADER)
	c++ $(CFLAGS) -c -o $@  -c $<

$(NAME): $(OBJ)
	c++ $(CFLAGS) $(FILES) -o $(NAME)

clean:
	@rm -rf $(OBJ)
	
fclean: clean
	@rm -rf $(NAME)

re: fclean all