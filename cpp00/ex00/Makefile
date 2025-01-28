SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.o)

NAME 		= megaphone
CC 			= c++
CPPFLAGS 	= -Wall -Wextra -Werror -std=c++98
RM 			= rm -rf

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CPPFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CC) $(CPPFLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re