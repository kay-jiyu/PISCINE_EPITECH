NAME    =   cat
SRC     =   cat.c
OBJ     =   $(SRC:.c=.o)

all:    $(NAME)

$(NAME):    $(OBJ)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
	rm -f *.gcno *.gcda # Nettoie les fichiers de couverture

fclean: clean
	rm -f $(NAME)
	rm -f unit_tests

re: fclean all

tests_run:
	gcc -o unit_tests cat.c ../tests/test_cat.c --coverage -lcriterion -D UNIT_TEST

.PHONY: all clean fclean re tests_run
