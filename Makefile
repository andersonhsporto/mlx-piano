NAME	= mlx_piano

CC		=	gcc
CFLAGS	=	-Wall -Wextra -g #-Werror
INCLUDE =	-I ./src/includes
MLX		=   -lmlx -lXext -lX11
HEADER	= 	./src/includes/piano.h

SRC		= $(addprefix ./src/files/, \
		piano.c init.c event.c keys.c keys_validation.c miniaudio.c \
)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $(<:%.c=%.o)

OBJ = $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	rm -rf $(NAME)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) $(MLX) -lm -ldl -lpthread -o $(NAME)

clean:
	rm -rf $(OBJ)
	rm -rf ./a.out

fclean: clean
	rm -rf $(NAME)

re: fclean all

test:
	make
	./mlx_piano

.PHONY: all clean fclean re
