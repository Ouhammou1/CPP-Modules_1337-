CC=c++
CPPFLAG=-Wall -Wextra -Werror -std=c++98
CPPFILES=$(shell find . -name '*.cpp')
HEADER=$(shell find . -name '*.hpp')
OBJS=$(CPPFILES:.cpp=.o)


NAME=out_put

all:$(NAME)

%.o:%cpp $(HEADER)
	$(CC) $(CPPFLAG) -c $< -o $@

$(NAME) : $(OBJS)
	$(CC) $(CPPFLAG) $(OBJS) -o $(NAME)

 
clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all


run: re clean
	@echo "\n"
	@./$(NAME)
