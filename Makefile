SRCS = ${addprefix sort/, ${shell ls ./sort | grep '\.c'}}
OBJS = ${SRCS:%.c=%.o}
INCS = ./includes
NAME = sort.a
LIBC = ar rcs
RM = rm -rf

CC = gcc
CFLAGS = -Wall -Werror -Wextra -I./includes/
MAIN = main.c
MAIN_OBJ = ${MAIN:%.c=%.o}
EXEC = test

%.o : %.c
	${CC} ${CFLAGS} -c -o $@ $<

${NAME} : ${OBJS}
	${LIBC} ${NAME} ${OBJS}

all : ${NAME}

${EXEC} : ${NAME} ${MAIN_OBJ}
	${CC} ${CFLAGS} ${MAIN_OBJ} -L. ${NAME} -o ${EXEC}

clean :
	${RM} ${OBJS} ${MAIN_OBJ}
	${RM} ${EXEC}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY : all bonus clean fclean re
