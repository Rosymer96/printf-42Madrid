NAME = libftprintf.a

LIBFT = libft/libft.a

DIR_LIB = libft

CC = cc
CFLAGS = -Wall -Wextra -Werror -I. -I$(DIR_LIB)

SRCS = ft_printf.c ft_printf_char.c ft_printf_str.c ft_putnbr.c ft_printf_int.c ft_printf_base.c ft_printf_ptr.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJS)

$(LIBFT):
	@make -C $(DIR_LIB)

%.o: %.c ft_printf.h
	@echo "Compiling: $<"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)
	@make -C $(DIR_LIB) clean
	@echo "Cleaned printf and libft object files."

fclean: clean
	@rm -f $(NAME)
	@make -C $(DIR_LIB) fclean
	@echo "Full clean completed."
	
re: fclean all
.PHONY: all bonus clean fclean re