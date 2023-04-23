/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_funcs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 23:36:26 by skunert           #+#    #+#             */
/*   Updated: 2023/04/23 17:37:38 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rotate(t_stack *stack)
{
	int	tmp;
	int	i;

	if (stack->top == 0 || stack->top == 1)
		return ;
	tmp = stack->collection[stack->top - 1];
	i = 1;
	while (i < stack->top)
	{
		stack->collection[stack->top - i] = stack->collection[stack->top - i - 1];
		i++;
	}
	stack->collection[0] = tmp;
}

void	ft_rr(t_stack *stack_a, t_stack *stack_b)
{
	ft_rotate(stack_a);
	ft_rotate(stack_b);
}

void	ft_r_rotate(t_stack *stack)
{
	int	tmp;
	int	i;

	if (stack->top == 0 || stack->top == 1)
		return ;
	tmp = stack->collection[0];
	i = 0;
	while (i < stack->top - 1)
	{
		stack->collection[i] = stack->collection[i + 1];
		i++;
	}
	stack->collection[stack->top - 1] = tmp;
}

void	ft_rrr(t_stack *stack_a, t_stack *stack_b)
{
	ft_r_rotate(stack_a);
	ft_r_rotate(stack_b);
}
