# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/21 18:01:50 by mmardi            #+#    #+#              #
#    Updated: 2022/08/21 21:19:33 by mmardi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = megaphone

CFLAGS = -Wall -Wextra -Werror -std=c++98

FILES = megaphone.cpp

OBJ = $(FILES:.cpp=.o)

all: $(NAME) 
$(NAME): $(OBJ)
	c++ $(CFLAGS) $(FILES) -o $(NAME)

clean:
	@rm -rf $(OBJ)
	
fclean: clean
	@rm -rf $(NAME)

re: fclean all