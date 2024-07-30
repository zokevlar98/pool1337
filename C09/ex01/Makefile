NAME = libft.a

CC = cc

SOURCE = srcs/

CFLAGS = -Wall -Wextra -Werror 

SRCS = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

OBJS = ${addprefix ${SOURCE},${SRCS:.c=.o}}

HEADER = includes

.c.o :
	${CC} ${CFLAGS} -I ${HEADER} -c $< -o ${<:.c=.o}

${NAME} : ${OBJS}
	ar -rc ${NAME} ${OBJS}

all : ${NAME}

clean :
	rm -f ${OBJS}

fclean : clean
	rm -f ${NAME}

re : fclean all

.PHONY : clean
