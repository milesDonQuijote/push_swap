CC	= gcc
INC	= -Iheader -Ilibft
SRC	= $(wildcard src/*/*.c src/*/*/*.c)
OBJ	= $(SRC:.c=.o)
NAME	= source.a
LIBFT	= libft/libft.a

all:
	$(CC) den.c $(SRC) $(LIBFT) $(INC) -o push_swap

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)
