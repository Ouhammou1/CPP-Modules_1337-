CC=c++
CPPFLAGS= -Wall -Wextra -Werror -std=c++98
CFILES= main.cpp Harl.cpp


OBJS=$(CFILES:.cpp=.o)
NAME= harl

all: $(NAME)

%.o:%.cpp Harl.h
	$(CC) $(CPPFLAGS) -c $< -o $@

$(NAME):$(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	@rm -rf $(OBJS)

fclean :clean
	@rm -rf $(NAME)

re : fclean all