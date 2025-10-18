CC=c++
CPPFLAGS= -Wall -Wextra -Werror -std=c++98 
CPPFILES= $(shell find . -name '*.cpp')
HEADER=$(shell find . -name '*.hpp')
OBJS=$(CPPFILES:.cpp=.o)


NAME=out_put


all:$(NAME)

%.o:%.cpp $(HEADER)
	$(CC) $(CPPFLAGS) -c $< -o $@

$(NAME):$(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	@rm -rf $(OBJS)

fclean:clean
	@rm -rf $(NAME)

re : fclean all



run: all clean
	@echo "\n\033[1;31m🚀 Running $(NAME)...\033[0m\n"
	@./$(NAME)
	@echo "\n\033[1;32m✅ Done! Enjoy!\033[0m\n"