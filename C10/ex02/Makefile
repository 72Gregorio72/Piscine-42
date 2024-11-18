NAME = ft_tail
SRC = srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_ctail.c srcs/ft_atoi.c srcs/helper.c main.c
OBJS = ${SRC:.c=.o}
CC = cc -Wall -Werror -Wextra
INC = -I includes

all: ${NAME}

%o: %c
	${CC} -c $< -o $@ ${INC}

${NAME}: ${OBJS}
	${CC} -o $@ ${OBJS}
clean:
	-rm ${OBJS}
fclean: clean
	-rm ${NAME}
re: fclean all

.PHONY: all re fclean clean