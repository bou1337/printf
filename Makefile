NAME = libftprintf.a

SRC = ft_put_char.c ft_put_x.c ft_put_int.c ft_put_ads.c ft_put_str.c  ft_put_xmaju.c ft_put_unis_int.c ft_printf.c 

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $?

clean:
	$(RM) $(OBJ)

.o: .c
	$(CC) $(CFLAGS) -c $?

fclean: clean
	$(RM) $(NAME)

re: fclean all