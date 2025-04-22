CC=c++
CPPFILES=-Wall -Wextra -Werror -std=c++98  
CFILES= $(shell find . -name '*.cpp')
HEADER=$(shell find . -name '*.hpp')
OBJS=$(CFILES:.cpp=.o)


NAME=a.out


all:$(NAME)

%.o:%.cpp $(HEADER)
	$(CC) $(CPPFILES) -c $< -o $@

$(NAME):$(OBJS)
	$(CC) $(CPPFILES) $(OBJS) -o $(NAME)

clean:
	@rm -rf $(OBJS)

fclean:clean
	@rm -rf $(NAME)

re : fclean all
