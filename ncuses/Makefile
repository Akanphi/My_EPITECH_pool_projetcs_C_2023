##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## for Game Cloud Bounce
##

SRCS =	$(wildcard *.c)

OBJS = $(SRCS:.c=.o)

NAME = bounce

CC =	gcc

all: $(NAME)

$(NAME):$(OBJS)
	$(CC) -o $(NAME) $(OBJS) -lncurses

clean:
	rm -rf *.o

fclean: clean
	rm -rf *.a

re: fclean all
