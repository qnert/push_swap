CC = CC
CFLAGS = -Wall -Wextra -Werror
NAME = push_swap

SRCS = check_funcs.c main.c stack_funcs.c

all:
	@cd libft && make
	@cd ft_printf && make
	@$(CC) $(CFLAGS) $(SRCS) -o $(NAME) libft/libft.a ft_printf/libftprintf.a

clean:
	@cd libft && make fclean
	@cd ft_printf && make fclean

fclean: clean
	@rm push_swap

