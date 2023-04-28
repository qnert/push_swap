CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = push_swap

SRCS = ./instructions/check_funcs.c ./instructions/ft_atoi_long.c ./instructions/stack_argv_funcs.c ./instructions/stack_funcs.c ./instructions/swap_funcs.c ./instructions/push_funcs.c\
		./instructions/rotate_funcs.c ./instructions/reverse_rotate_funcs.c ./sorting/presteps_funcs.c \
		./sorting/small_sort.c ./sorting/big_sort.c

OBJS = $(SRCS:.c=.o)

NAME_SRC = push_swap.c

NAME_OBJ = $(NAME_SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(NAME_OBJ)
	@cd includes && make
	$(CC) $(CFLAGS) -o $(NAME) $(NAME_OBJ) $(OBJS) ./includes/includes.a

clean:
	@cd instructions && rm -f *.o
	@cd sorting && rm -f *.o
	@cd includes && make fclean
	@rm -f *.o

fclean: clean
	@rm -f $(NAME) $(BONUS)


re: fclean all
