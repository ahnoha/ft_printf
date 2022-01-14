NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror 
HEADERS = printf.h 
SRC = 	./src/ft_strlen.c \
		./src/ft_printf.c \
		./src/ft_printf_format.c \
		./src/ft_putchar.c \
		./src/ft_putnbr.c \
		./src/ft_putstr.c \
		./src/ft_putunbr.c \
		./src/to_hex.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

%.o: %.c $(HEADERS)
	gcc $(CFLAGS)  -o $@ -c $<

$(NAME): $(OBJ)
	ar rcs $(NAME) $^

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
