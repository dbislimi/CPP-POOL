SRCS = main.cpp PmergeMe.cpp
OBJS = $(SRCS:.cpp=.o)

NAME 		= PmergeMe
CC 			= c++
CPPFLAGS 	= -Wall -Wextra -Werror -std=c++98 -g

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
