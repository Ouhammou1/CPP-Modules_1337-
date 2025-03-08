CC =c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 
CFILES = awesome.cpp contact.cpp  PhoneBook.cpp 

OBJS = $(CFILES:.cpp=.o)
NAME = awesome

all : $(NAME)
$(NAME):$(OBJS) PhoneBook.h
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	@rm -rf $(OBJS)
fclean: clean
	@rm -rf $(NAME)

re: fclean all