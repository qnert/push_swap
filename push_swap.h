/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 10:05:37 by skunert           #+#    #+#             */
/*   Updated: 2023/04/21 23:56:59 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <stddef.h>
# include <ctype.h>
# include <string.h>
# include <limits.h>
# include "ft_printf/ft_printf.h"
# include "libft/libft.h"

typedef struct Stack
{
	int	*collection;
	int	capacity;
	int	top;
}t_stack ;

int		check_int(int argc, char **argv);
int		check_dup(int argc, char **argv);
int		check_input(int argc, char **argv);
t_stack	*stack_create(int capacity);
void	stack_destroy(t_stack *stack);
int		push(t_stack *stack, int value);
int		pull(t_stack *stack, int *value);
t_stack	*stack_init(int argc, char **argv);
void	ft_swap(t_stack *stack);
void	ft_ss(t_stack *stack_a, t_stack *stack_b);
void	ft_push(t_stack *stack_a, t_stack *stack_b);
void	ft_rotate(t_stack *stack);
void	ft_rr(t_stack *stack_a, t_stack *stack_b);

#endif