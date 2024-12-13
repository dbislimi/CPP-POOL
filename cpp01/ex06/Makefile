SRCS = main.cpp Harl.cpp
OBJS = ${SRCS:.cpp=.o}

NAME 		= harlFilter
CC 			= c++
CPPFLAGS 	= -Wall -Werror -std=c++98 -g3 #-Wextra
RM 			= rm -rf

all : ${NAME}

${NAME} : ${OBJS}
	${CC} ${CPPFLAGS} -o ${NAME} ${OBJS} 

%.o: %.c
	$(CC) $(CPPFLAGS) -c -o $@ $<

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
