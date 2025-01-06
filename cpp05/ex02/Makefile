SRCS = main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp
OBJS = ${SRCS:.cpp=.o}

NAME 		= a.out
CC 			= c++
CPPFLAGS 	= -Wall -Wextra -Werror -std=c++98 -g3
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
