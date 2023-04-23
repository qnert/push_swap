/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_funcs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 14:10:48 by skunert           #+#    #+#             */
/*   Updated: 2023/04/23 18:50:35 by skunert          ###   ########.fr       */
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

void	convert_collection(t_stack *stack)
{
	int	i;
	int	j;
	int	tmp;
	int	*copy;

	i = 0;
	tmp = stack->collection[i];
	copy = int_arr_cpy(stack);
	if (copy == NULL)
		return ;
	while (i < stack->top)
	{
		j = 0;
		while (j < stack->top)
		{
			if (tmp > copy[j])
				tmp = copy[j];
			j++;
		}
		j = 0;
		while (j < stack->top)
		{
			if (copy[j] == tmp)
			{
				stack->collection[j] = i;
				break ;
			}
			j++;
		}
		tmp++;
		i++;
	}
	free(copy);
}
