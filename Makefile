NAME = libftprintf.a

LIBFT = libft/libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -I. -Ilibft

SRCS = ft_printf.c ft_printf_utils.c ft_printf_char.c ft_printf_str.c ft_printf_ptr.c ft_printf_hexa.c ft_printf_int.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

bonus: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJS)

$(LIBFT):
	make -C libft

HEADERS = ft_printf.h libft/libft.h

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	make -C libft fclean

re: fclean all
.PHONY: all bonus clean fclean re