SRCS = main.cpp Point.cpp Fixed.cpp bsp.cpp
OBJS = $(SRCS:.cpp=.o)

NAME 		= triangle
CC 			= c++
CPPFLAGS 	= -Wall -Wextra -Werror -std=c++98 -g3
RM 			= rm -rf

all : $(NAME)

${NAME} : ${OBJS}
	${CC} ${CPPFLAGS} -o ${NAME} ${OBJS} 

%.o: %.cpp
	$(CC) $(CPPFLAGS) -c -o $@ $<

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ./a.out

re: fclean all

.PHONY: all clean fclean re