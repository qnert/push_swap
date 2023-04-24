/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_funcs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 14:10:48 by skunert           #+#    #+#             */
/*   Updated: 2023/04/23 22:57:46 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_sorted_a(t_stack *stack)
{
	int	i;

	if (stack->top == 1)
		return (1);
	i = 0;
	while (i < stack->top - 1)
	{
		if (stack->collection[i] < stack->collection[i + 1])
			return (0);
		i++;
	}
	return (1);
}

int	*int_arr_cpy(t_stack *stack)
{
	int	*copy;
	int	i;

	copy = malloc(stack->capacity * sizeof(int));
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (i < stack->top)
	{
		copy[i] = stack->collection[stack->top - i - 1];
		i++;
	}
	return (copy);
}

void	sort_int_arr(int *collection, int len)
{
	int	tmp;
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (collection[i] > collection[j])
			{
				tmp = collection[i];
				collection[i] = collection[j];
				collection[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

void	convert_collection(t_stack *stack)
{
	int	i;
	int	j;
	int	*copy;

	i = 0;
	copy = int_arr_cpy(stack);
	sort_int_arr(copy, stack->top);
	if (copy == NULL)
		return ;
	while (i < stack->top)
	{
		j = 0;
		while (j < stack->top)
		{
			if (stack->collection[i] == copy[j])
				stack->collection[i] = j;
			j++;
		}
		i++;
	}
	free(copy);
}
