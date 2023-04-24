/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 15:15:21 by skunert           #+#    #+#             */
/*   Updated: 2023/04/24 17:39:55 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	big_sort(t_stack *stack_a, t_stack *stack_b)
{
	int	i;
	int	j;
	int	len;
	int	bit_size;

	convert_collection(stack_a);
	i = -1;
	len = stack_a->top;
	bit_size = 0;
	while ((stack_a->capacity - 1) >> bit_size)
		bit_size++;
	while (++i < bit_size)
	{
		j = -1;
		while (++j < len)
		{
			if (((stack_a->collection[stack_a->top - 1] >> i) & 1) == 0)
				ft_push_b(stack_a, stack_b);
			else
				ft_rotate_a(stack_a);
		}
		while (stack_b->top != 0)
			ft_push_a(stack_a, stack_b);
	}
}
