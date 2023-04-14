CC = CC
CFLAGS = -Wall -Wextra -Werror
NAME = push_swap

SRC =

OJBS =

all: libft printf

libft:
	git clone https://github.com/qnert/libft.git
	make -C ~/Desktop/42_Heilbronn/push_swap/libft/libft

printf:
	git clone https://github.com/qnert/ft_printf.git
	make -C ~/Desktop/42_Heilbronn/push_swap/ft_printf

