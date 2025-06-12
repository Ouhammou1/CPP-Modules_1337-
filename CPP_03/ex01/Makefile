CC=c++
CPPFLAGS=-Wall -Wextra -Werror -std=c++98
CFALIS= main.cpp  ClapTrap.cpp   ScavTrap.cpp 

OBJS=$(CFALIS:.cpp=.o)

NAME= a.out

all: $(NAME)


%.o:%.cpp ClapTrap.hpp ScavTrap.hpp
	$(CC) $(CPPFLAGS) -c $< -o $@

$(NAME):$(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	@rm -rf $(OBJS)
fclean: clean
	@rm -rf $(NAME)

re: fclean all
