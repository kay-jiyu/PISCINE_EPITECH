

NAME    =   grep

SRC     =   grep.c

OBJ     =   $(SRC:.c=.o)

all:    $(NAME)

$(NAME):    $(OBJ)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

tests_run:
	gcc -o unit_tests grep.c ../tests/test_grep.c --coverage -lcriterion -D UNIT_TEST
	./unit_tests

.PHONY: all clean fclean re
