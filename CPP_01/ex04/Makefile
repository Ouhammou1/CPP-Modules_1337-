CC=c++
CPPFLAGS=-Wall -Wextra -Werror -std=c++98
CFILES=main.cpp

OBJS=$(CFILES:.cpp=.o)
NAME = files

all:$(NAME)


%.o:%.cpp 
	$(CC) $(CPPFLAGS) -c $< -o $@

$(NAME):$(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	@rm -rf $(OBJS)

fclean:clean
	@rm -rf $(NAME)

re: fclean all 