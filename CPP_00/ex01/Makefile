CC =c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 
CFILES = awesome.cpp Contact.cpp  PhoneBook.cpp 

OBJS = $(CFILES:.cpp=.o)
NAME = awesome

all : $(NAME)
 
%.o:%.cpp PhoneBook.h  Contact.h 
	$(CC) $(CPPFLAGS) -c  $< -o $@

$(NAME):$(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	@rm -rf $(OBJS)
fclean: clean
	@rm -rf $(NAME)

re: fclean all