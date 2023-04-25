CC = CC
CFLAGS = -Wall -Wextra -Werror
NAME = push_swap

SRCS = ./instructions/check_funcs.c push_swap.c ./instructions/stack_funcs.c ./instructions/swap_funcs.c ./instructions/push_funcs.c\
		./instructions/rotate_funcs.c ./instructions/reverse_rotate_funcs.c ./sorting/presteps_funcs.c \
		./sorting/small_sort.c ./sorting/big_sort.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)
	@cd libft && make
	@cd ft_printf && make
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS) libft/libft.a ft_printf/libftprintf.a

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

