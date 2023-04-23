/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_funcs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 14:10:48 by skunert           #+#    #+#             */
/*   Updated: 2023/04/23 14:19:05 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/Users/qnert/Desktop/C:C++/42_Heilbronn/push_swap/push_swap.h"

int	is_sorted(t_stack *stack)
{
	int	i;

	if (stack->top == 1)
		return (1);
	i = 0;
	while (i < stack->top)
	{
		if (stack->collection[i] < stack->collection[i + 1])
			return (0);
		i++;
	}
	return (1);
}
