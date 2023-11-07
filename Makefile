# Constants

CC = gcc

CFLAGS = -Werror -Wextra -Wall

NAME = libft.a

HDR = libft.h

SRC = main.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_strlen.c

OBJ = $(SRC:.c=.o)

# Commands

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(OBJ) $(NAME)

re: fclean all

.PHONY: clean fclean all re bonus