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
	src/sort.c\
	src/compare_sort.c\
	src/swap_node.c\
	src/verif_sort.c

NAME = organized

OBJ = $(SRC:.c=.o)

INCLUDE = -I./include/

LIB = -L ./lib/my/ -lmy

CFLAGS += -Wall -Wextra -lncurses $(INCLUDE)

all: $(NAME)

$(NAME): $(OBJ)
	make -C lib/my
	gcc -o $(NAME) $(OBJ) $(CFLAGS) -L./libshell -lshell $(LIB)

valgrind: $(NAME)
	@echo -e "\033[1;34mRunning valgrind on $(NAME)...\033[0m"
	@valgrind --leak-check=full --show-leak-kinds=all
		--track-origins=yes ./$(NAME) $(ARGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
