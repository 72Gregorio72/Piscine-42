NAME = ft_display_file
SRC = srcs/ft_display_file.c srcs/ft_putstr.c srcs/ft_strlen.c main.c
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