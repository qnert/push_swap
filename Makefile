CC = CC
CFLAGS = -Wall -Wextra -Werror
NAME = push_swap
CHECKER = checker

SRCS = ./instructions/check_funcs.c push_swap.c ./instructions/stack_funcs.c ./instructions/swap_funcs.c ./instructions/push_funcs.c\
		./instructions/rotate_funcs.c ./instructions/reverse_rotate_funcs.c ./sorting/presteps_funcs.c \
		./sorting/small_sort.c ./sorting/big_sort.c

OBJS = $(SRCS:.c=.o)

GNLSRCS = ./includes/get_next_line/get_next_line.c ./includes/get_next_line/get_next_line_utils.c

GNLOBJS = $(GNNLSRCS:.c=.o)

all: $(NAME)
	@cd ./includes/libft && make
	@cd ./includes/ft_printf && make
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS) ./includes/libft/libft.a ./includes/ft_printf/libftprintf.a

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) -c $(SRCS)
	@$(CC) $(CFLAGS) -c $(GNLSRCS)

clean:
	@cd ./includes/libft && make fclean
	@cd ./includes/ft_printf && make fclean
	@cd instructions && rm -f *.o
	@cd sorting && rm -f *.o
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

bonus: $(NAME)
	@$(CC) $(CFLAGS) -o $(CHECKER) $(OBJS) ./includes/libft/libft.a ./includes/ft_printf/libftprintf.a