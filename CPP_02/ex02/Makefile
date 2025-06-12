CC=c++
CPPFLAGS=-Wall -Wextra -Werror -std=c++98
CFILES= main.cpp  Fixed.cpp 

OBJS=$(CFILES:.cpp=.o)

NAME= a.out

all:$(NAME)

%.o:%.cpp Fixed.hpp
	$(CC) $(CPPFLAGS) -c $< -o $@

$(NAME) :$(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf 	$(NAME)

re: fclean all