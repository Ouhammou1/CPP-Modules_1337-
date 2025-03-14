CC =c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 
CFILES =  main.cpp  Zombie.cpp  newZombie.cpp   randomChump.cpp

OBJS  =$(CFILES:.cpp=.o)
NAME = zombie

all : $(NAME)

%.o:%.cpp Zombie.hpp
	$(CC) $(CPPFLAGS) -c $< -o $@

$(NAME):$(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS)  -o $(NAME)

clean:
	@rm $(OBJS)

fclean: clean
	@rm  $(NAME)

re : fclean all
