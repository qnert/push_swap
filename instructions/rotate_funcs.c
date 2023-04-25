/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_funcs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 23:36:26 by skunert           #+#    #+#             */
/*   Updated: 2023/04/25 16:21:05 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rotate(t_stack *stack)
{
	int	tmp;
	int	i;
	int	len;

	if (stack->top == 0 || stack->top == 1)
		return ;
	tmp = stack->collection[stack->top - 1];
	i = 1;
	while (i < stack->top)
	{
		len = stack->top - i;
		stack->collection[len] = stack->collection[len - 1];
		i++;
	}
	stack->collection[0] = tmp;
}

void	ft_rotate_a(t_stack *stack)
{
	int	tmp;
	int	i;
	int	len;

	if (stack->top == 0 || stack->top == 1)
		return ;
	tmp = stack->collection[stack->top - 1];
	i = 1;
	while (i < stack->top)
	{
		len = stack->top - i;
		stack->collection[len] = stack->collection[len - 1];
		i++;
	}
	stack->collection[0] = tmp;
	ft_printf("ra\n");
}

void	ft_rotate_b(t_stack *stack)
{
	int	tmp;
	int	i;
	int	len;

	if (stack->top == 0 || stack->top == 1)
		return ;
	tmp = stack->collection[stack->top - 1];
	i = 1;
	while (i < stack->top)
	{
		len = stack->top - i;
		stack->collection[len] = stack->collection[len - 1];
		i++;
	}
	stack->collection[0] = tmp;
	ft_printf("rb\n");
}

void	ft_rr(t_stack *stack_a, t_stack *stack_b)
{
	ft_rotate(stack_a);
	ft_rotate(stack_b);
	ft_printf("rr\n");
}
