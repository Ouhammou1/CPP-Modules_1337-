CC =c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 #-fsanitize=address -g 
CFILES = main.cpp HumanA.cpp Weapon.cpp  HumanB.cpp

OBJS=$(CFILES:.cpp=.o)

NAME=violence


all:$(NAME)

%.o:%.cpp HumanA.hpp HumanB.hpp Weapon.cpp
	$(CC) $(CPPFLAGS) -c $< -o $@

$(NAME):$(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	@rm -rf $(OBJS)
fclean:clean
	@rm -rf $(NAME)

re: fclean all
