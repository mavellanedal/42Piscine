CC = cc
CFLAGS = -Wall -Werror -Wextra
SRC = main.c
OBJ =$(SOURCE:.c=.o)
NAME = rush02
all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.O %.C
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
