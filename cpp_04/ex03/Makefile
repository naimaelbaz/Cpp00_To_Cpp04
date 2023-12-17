# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/14 09:37:31 by nel-baz           #+#    #+#              #
#    Updated: 2023/12/16 08:55:24 by nel-baz          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = AMateria
CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp main.cpp  

OBJS = $(SRCS:.cpp=.o)

%.o: %.cpp AMateria.hpp Character.hpp Cure.hpp ICharacter.hpp IMateriaSource.hpp Ice.hpp MateriaSource.hpp 
	$(CXX) $(CXXFLAGS) -c $< -o $@

all: $(NAME) $(OBJS)

$(NAME): $(OBJS) 
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean