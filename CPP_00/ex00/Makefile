CC =c++
CPPFLAGS= -Wall -Wextra -Werror -std=c++98 
CFILES= megaphone.cpp
 
OBJS= $(CFILES:.cpp=.o)
NAME = megaphone

all: $(NAME)
$(NAME):$(OBJS) 
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	@rm -rf $(OBJS)

fclean : clean
	@rm -rf $(NAME)

re: fclean all 