/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_push_funcs.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 14:14:00 by skunert           #+#    #+#             */
/*   Updated: 2023/04/22 16:47:48 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/Users/qnert/Desktop/C:C++/42_Heilbronn/push_swap/push_swap.h"

void	ft_swap(t_stack *stack)
{
	int	tmp;

	if (stack->top == 0 || stack->top == 1)
		return ;
	tmp = stack->collection[stack->top - 1];
	stack->collection[stack->top - 1] = stack->collection[stack->top - 2];
	stack->collection[stack->top - 2] = tmp;
}

void	ft_ss(t_stack *stack_a, t_stack *stack_b)
{
	ft_swap(stack_a);
	ft_swap(stack_b);
}

void	ft_push(t_stack *stack_a, t_stack *stack_b)
{
	int	*tmp;
	int	i;

	tmp = &i;
	i = 0;
	if (stack_a->top == 0)
		return ;
	pull(stack_a, tmp);
	push(stack_b, i);
}
