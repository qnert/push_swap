CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = push_swap
CHECKER = checker

SRCS = ./instructions/check_funcs.c ./instructions/stack_funcs.c ./instructions/swap_funcs.c ./instructions/push_funcs.c\
		./instructions/rotate_funcs.c ./instructions/reverse_rotate_funcs.c ./sorting/presteps_funcs.c \
		./sorting/small_sort.c ./sorting/big_sort.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@cd includes && make
	$(CC) $(CFLAGS) -o $(NAME) push_swap.c $(OBJS) ./includes/includes.a

clean:
	@cd instructions && rm -f *.o
	@cd sorting && rm -f *.o
	@cd includes && fclean

fclean: clean
	@rm -f $(NAME)

re: fclean all

