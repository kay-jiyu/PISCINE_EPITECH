

NAME    =   my_advanced_do-op

SRC     =   main.c \
            operations.c

OBJ     =   $(SRC:.c=.o)

CPPFLAGS =  -I../include/

LDFLAGS  =  -L../lib/ -lmy

all:    $(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:     fclean all
