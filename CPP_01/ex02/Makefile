CC =c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 #-fsanitize=address -g 
CFILES = main.cpp

OBJS  = $(CFILES:.cpp=.o)

NAME=HI_THIS_IS_BRAIN

all : $(NAME)

%.o:%.cpp
	$(CC) $(CPPFLAGS) -c $< -o $@

$(NAME) :$(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	@rm -rf $(OBJS)

fclean :  clean
	@rm -rf $(NAME)

re : fclean all