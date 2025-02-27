##
## EPITECH PROJECT, 2024
## B-CPE-110-LIL-1-1-organized-antoine.rousselle
## File description:
## Makefile
##

SRC = src/organized.c\
	src/add.c\
	src/del.c\
	src/disp.c\
	src/sort.c

NAME = organized

OBJ = $(SRC:.c=.o)

INCLUDE = -I./include/

LIB = -L ./lib/my/ -lmy

EXTRA = -Wall -Wextra -g

all: $(NAME)

$(NAME): $(OBJ)
	make -C lib/my
	gcc -o $(NAME) $(OBJ) $(EXTRA) $(INCLUDE) -L./libshell -lshell $(LIB)

valgrind: $(NAME)
	@echo -e "\033[1;34mRunning valgrind on $(NAME)...\033[0m"
	@valgrind --leak-check=full --show-leak-kinds=all
		--track-origins=yes ./$(NAME) $(ARGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
