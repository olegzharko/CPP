# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ozharko <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/18 14:30:51 by ozharko           #+#    #+#              #
#    Updated: 2018/06/18 14:30:53 by ozharko          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = clang++

FLAGS = -Wall -Werror -Wextra

NAME = 	phonebook

SRC = 	Contact.class.cpp \
		main.cpp	\

OBJ = 	$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(FLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CPP) $(FLAGS) -o $@ -c $<

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
