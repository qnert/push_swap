/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 10:05:37 by skunert           #+#    #+#             */
/*   Updated: 2023/04/24 13:18:46 by skunert          ###   ########.fr       */
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

//mystack struct
typedef struct Stack
{
	int	*collection;
	int	capacity;
	int	top;
}	t_stack;

//check input funcs
int		check_int(int argc, char **argv);
int		check_dup(int argc, char **argv);
int		check_input(int argc, char **argv);
//stack funcs
t_stack	*stack_create(int capacity);
void	stack_destroy(t_stack *stack);
int		push(t_stack *stack, int value);
int		pull(t_stack *stack, int *value);
t_stack	*stack_init(int argc, char **argv);
//instruction funcs
//swap
void	ft_swap(t_stack *stack);
void	ft_swap_a(t_stack *stack);
void	ft_swap_b(t_stack *stack);
void	ft_ss(t_stack *stack_a, t_stack *stack_b);
//push
void	ft_push_b(t_stack *stack_a, t_stack *stack_b);
void	ft_push_a(t_stack *stack_a, t_stack *stack_b);
//rotate_funcs
void	ft_rotate(t_stack *stack);
void	ft_rotate_a(t_stack *stack);
void	ft_rotate_b(t_stack *stack);
void	ft_rr(t_stack *stack_a, t_stack *stack_b);
//reverse rotate funcs
void	ft_r_rotate(t_stack *stack);
void	ft_r_rotate_a(t_stack *stack);
void	ft_r_rotate_b(t_stack *stack);
void	ft_rrr(t_stack *stack_a, t_stack *stack_b);
//sorting funcs
int		is_sorted_a(t_stack *stack);
int		*int_arr_cpy(t_stack *stack);
void	sort_int_arr(int *collection, int len);
void	convert_collection(t_stack *stack);
//small_sort_funcs
void	small_sort(t_stack *stack_a);

#endif