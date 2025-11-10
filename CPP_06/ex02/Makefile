CC=c++
CPPFLAGS=-Wall -Wextra -Werror -std=c++98
CPPFILES= $(shell find . -name '*.cpp')
HEADER=$(shell find . -name '*.hpp')
OBJS=$(CPPFILES:.cpp=.o)


<<<<<<< HEAD
<<<<<<< HEAD:CPP_06/ex02/Makefile
NAME=dynamic_cast
=======
NAME=reinterpret_cast
>>>>>>> 27eabb6cd3c1c3bc408ba35287bfa8ecf390e19a:CPP_06/ex01/Makefile
=======
NAME=dynamic_cast
>>>>>>> 27eabb6cd3c1c3bc408ba35287bfa8ecf390e19a


all:$(NAME)

%.o:%.cpp $(HEADER)
	$(CC) $(CPPFLAGS)  -c $< -o $@

$(NAME):$(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	@rm -rf $(OBJS)

fclean:clean
	@rm -rf $(NAME)

re : fclean all



