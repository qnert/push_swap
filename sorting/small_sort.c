/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 11:24:50 by skunert           #+#    #+#             */
/*   Updated: 2023/04/24 12:22:33 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	small_sort(t_stack *stack_a)
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