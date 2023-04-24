/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_funcs.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 11:16:21 by skunert           #+#    #+#             */
/*   Updated: 2023/04/24 14:03:27 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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

void	ft_r_rotate_a(t_stack *stack)
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
	ft_printf("rra\n");
}

void	ft_r_rotate_b(t_stack *stack)
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
	ft_printf("rrb\n");
}

void	ft_rrr(t_stack *stack_a, t_stack *stack_b)
{
	ft_r_rotate(stack_a);
	ft_r_rotate(stack_b);
	ft_printf("rrr\n");
}
