# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/26 03:30:27 by bouhammo          #+#    #+#              #
#    Updated: 2025/03/26 03:36:28 by bouhammo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC=c++
CPPFLAGS=-Wall -Wextra -Werror -std=c++98
CFILES=Fixed.cpp   Point.cpp  bsp.cpp   main.cpp
OBJS =$(CFILES:.cpp=.o)

NAME=bsp

all:$(NAME)

%.o:%.cpp Fixed.hpp Point.hpp
	$(CC) $(CPPFLAGS) -c $< -o $@

$(NAME):$(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o  $(NAME)

clean: 
	@rm -rf $(OBJS)

fclean:clean
	@rm -rf $(NAME)

re :fclean all