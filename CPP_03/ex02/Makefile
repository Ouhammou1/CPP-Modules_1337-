# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bouhammo <bouhammo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/30 03:45:53 by bouhammo          #+#    #+#              #
#    Updated: 2025/03/30 04:53:39 by bouhammo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC=c++
CPPFLAGS=-Wall -Wextra -Werror -std=c++98
CFILES=ClapTrap.cpp FragTrap.cpp  main.cpp

OBJS=$(CFILES:.cpp=.o)

NAME= a.out

all:$(NAME)

%.o:%.cpp ClapTrap.hpp FragTrap.hpp 
	$(CC) $(CPPFLAGS) -c $< -o $@

$(NAME):$(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	@-rm -rf $(OBJS)

fclean:clean
	@rm -rf $(NAME)

re : fclean all

OK: all clean 
	@echo "\n\n\033[4;31mMAKE AND EXECUTE PROGRAM\033[0m\n\n"
	@./$(NAME)