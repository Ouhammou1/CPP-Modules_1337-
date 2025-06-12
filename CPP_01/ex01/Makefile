CC=c++
CPPFLAGS= -Wall -Wextra -Werror -std=c++98 
CFILES= Zombie.cpp  main.cpp zombieHorde.cpp

OBJS=$(CFILES:.cpp=.o)

NAME= Moar_brainz

all:$(NAME)

%.o:%.cpp  Zombie.hpp  
	$(CC) $(CPPFLAGS) -c $< -o $@

$(NAME):$(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re : fclean all
