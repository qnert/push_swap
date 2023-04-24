/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_funcs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 14:14:00 by skunert           #+#    #+#             */
/*   Updated: 2023/04/24 12:19:08 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_swap(t_stack *stack)
{
	int	tmp;

	if (stack->top == 0 || stack->top == 1)
		return ;
	tmp = stack->collection[stack->top - 1];
	stack->collection[stack->top - 1] = stack->collection[stack->top - 2];
	stack->collection[stack->top - 2] = tmp;
}

void	ft_swap_a(t_stack *stack)
{
	int	tmp;

	if (stack->top == 0 || stack->top == 1)
		return ;
	tmp = stack->collection[stack->top - 1];
	stack->collection[stack->top - 1] = stack->collection[stack->top - 2];
	stack->collection[stack->top - 2] = tmp;
	ft_printf("sa\n");
}

void	ft_swap_b(t_stack *stack)
{
	int	tmp;

	if (stack->top == 0 || stack->top == 1)
		return ;
	tmp = stack->collection[stack->top - 1];
	stack->collection[stack->top - 1] = stack->collection[stack->top - 2];
	stack->collection[stack->top - 2] = tmp;
	ft_printf("sb\n");
}

void	ft_ss(t_stack *stack_a, t_stack *stack_b)
{
	ft_swap(stack_a);
	ft_swap(stack_b);
	ft_printf("ss\n");
}
