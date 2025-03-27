CC=c++
CPPFLAGS=-Wall -Wextra -Werror -std=c++98
CFALIS=main.cpp  Fixed.cpp 

OBJS=$(CFALIS:.cpp=.o)

NAME= Fixedpoint

all: $(NAME)


%.o:%.cpp Fixed.hpp
	$(CC) $(CPPFLAGS) -c $< -o $@

$(NAME):$(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	@rm -rf $(OBJS)
fclean: clean
	@rm -rf $(NAME)

re: fclean all