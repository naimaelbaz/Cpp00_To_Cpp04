# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/19 11:30:45 by nel-baz           #+#    #+#              #
#    Updated: 2023/11/19 11:39:18 by nel-baz          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Account

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = Account.cpp tests.cpp

OBJS = $(SRCS:.cpp=.o)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME) $(OBJS)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:	
	rm -rf $(OBJS)

fclean:	clean
	rm -rf $(NAME)

re : fclean all

.PHONY: re all clean fclean