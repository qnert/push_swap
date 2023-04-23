CC = CC
CFLAGS = -Wall -Wextra -Werror
NAME = push_swap

SRCS = check_funcs.c main.c stack_funcs.c ./instructions/swap_push_funcs.c \
		./instructions/rotate_funcs.c ./sorting/sorting_funcs.c

OBJS = $(SRCS:.c=.o)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)
	@cd libft && make
	@cd ft_printf && make
	@$(CC) $(CFLAGS) $(SRCS) -o $(NAME) libft/libft.a ft_printf/libftprintf.a

$(NAME) : $(OBJS)
	@$(CC) $(CFLAGS) -c $(SRCS)

clean:
	@cd libft && make fclean
	@cd ft_printf && make fclean
	@cd instructions && rm -f *.o
	@cd sorting && rm -f *.o
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

