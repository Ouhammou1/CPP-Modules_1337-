CC=c++
CPPFLAGS=-Wall -Wextra -Werror -std=c++98 
CPPFILES=$(shell find . -name "*.cpp")
HEADER=$(shell find . -name "*.hpp" )
OBJS=$(CPPFILES:.cpp=.o)

NAME=easy_find

all:$(NAME)

%.o:%.cpp $(HEADER)
	$(CC) $(CPPFLAGS) -c $< -o $@

$(NAME) :$(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	@rm -rf $(OBJS)

fclean:clean
	@rm -rf $(NAME)

re : fclean all