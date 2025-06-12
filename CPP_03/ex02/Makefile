# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/30 03:45:53 by bouhammo          #+#    #+#              #
#    Updated: 2025/04/04 11:17:07 by bouhammo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC=c++
CPPFLAGS=-Wall -Wextra -Werror -std=c++98
CFILES=ClapTrap.cpp FragTrap.cpp  main.cpp ScavTrap.cpp

OBJS=$(CFILES:.cpp=.o)

NAME= a.out

all:$(NAME)

%.o:%.cpp ClapTrap.hpp FragTrap.hpp  ScavTrap.hpp
	$(CC) $(CPPFLAGS) -c $< -o $@

$(NAME):$(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	@-rm -rf $(OBJS)

fclean:clean
	@rm -rf $(NAME)

re : fclean all
