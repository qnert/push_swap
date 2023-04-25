/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 11:24:50 by skunert           #+#    #+#             */
/*   Updated: 2023/04/25 15:06:21 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	small_sort_three(t_stack *stack_a)
{
	convert_collection(stack_a);
	while (is_sorted_a(stack_a) == 0)
	{
		if (stack_a->collection[0] != 2)
		{
			if (stack_a->collection[stack_a->top - 1] == 2)
				ft_rotate_a(stack_a);
			else
				ft_r_rotate_a(stack_a);
		}
		if (is_sorted_a(stack_a) != 1)
			ft_swap_a(stack_a);
	}
}

void right_rotate(t_stack *stack, int value)
{
	int	i;

	i = 0;
	while (i < stack->top)
	{
		if (stack->collection[i] == value)
			break ;
		i++;
	}
	if (i > stack->top / 2)
		ft_rotate_a(stack);
	else
		ft_r_rotate_a(stack);
}

void	small_sort_five(t_stack *stack_a, t_stack *stack_b)
{
	convert_collection(stack_a);
	if (stack_a->capacity == 4)
	{
		while (stack_a->collection[stack_a->top - 1] != 0)
			right_rotate(stack_a, 0);
		ft_push_b(stack_a, stack_b);
	}
	else if (stack_a->capacity == 5)
	{
		while (stack_a->collection[stack_a->top - 1] != 0)
			right_rotate(stack_a, 0);
		ft_push_b(stack_a, stack_b);
		while (stack_a->collection[stack_a->top - 1] != 1)
			right_rotate(stack_a, 1);
		ft_push_b(stack_a, stack_b);
	}
	small_sort_three(stack_a);
	ft_push_a(stack_a, stack_b);
	if (stack_a->capacity == 5)
	{
		ft_push_a(stack_a, stack_b);
	}
}
