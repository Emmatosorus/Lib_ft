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

OBJ = main.o \
	ft_isalnum.o \
	ft_isalpha.o \
	ft_isascii.o \
	ft_isdigit.o \
	ft_isprint.o \
	ft_strlen.o

# Commands

$(OBJ): $(SRC) $(HDR)
	$(CC) -o $@ $^ $(CFLAGS)

$(NAME): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

all: $(SRC) $(HDR) $(OBJ)
	$(CC) -o $(OBJ) $(SRC) $(HDR) $(CFLAGS) \
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS) \
	rm -f $(OBJ)


.PHONY: clean
clean:
	rm -f $(OBJ)

fclean:
	rm -f $(OBJ) $(NAME)