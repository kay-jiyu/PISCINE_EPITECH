

NAME    =   my_screensaver

SRC     =   src/main.c \
            src/framebuffer_create.c \
            src/put_pixel.c \
            src/draw_square.c

OBJ     =   $(SRC:.c=.o)

CPPFLAGS    =   -I ./include/

LDFLAGS     =   -lcsfml-graphics -lcsfml-window -lcsfml-system

all:    $(NAME)

$(NAME):    $(OBJ)
	gcc -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
