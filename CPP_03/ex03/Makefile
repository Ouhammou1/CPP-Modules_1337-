# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/30 03:45:53 by bouhammo          #+#    #+#              #
#    Updated: 2025/04/05 15:47:37 by bouhammo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC=c++
CPPFLAGS=-Wall -Wextra -Werror -std=c++98
CFILES= $(shell find . -name '*.cpp')

HEADER=$(shell find . -name '*.hpp')
OBJS=$(CFILES:.cpp=.o)

NAME= a.out

all:$(NAME)

%.o:%.cpp $(HEADER)
	$(CC) $(CPPFLAGS) -c $< -o $@

$(NAME):$(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	@-rm -rf $(OBJS)

fclean:clean
	@rm -rf $(NAME)

re : fclean all

