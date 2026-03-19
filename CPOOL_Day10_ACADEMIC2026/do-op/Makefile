#

NAME    =   do-op

SRC     =   main.c

OBJ     =   $(SRC:.c=.o)

# -L pointe vers le dossier de la lib, -lmy fait le lien avec libmy.a
LDFLAGS =   -L../lib/ -lmy

# -I permet de trouver ton my.h
CPPFLAGS =  -I../include/

all:    $(NAME)

$(NAME):    $(OBJ)
    gcc -o $(NAME) $(OBJ) $(LDFLAGS) $(CPPFLAGS)

clean:
    rm -f $(OBJ)

fclean: clean
    rm -f $(NAME)

re: fclean all
