/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_funcs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 12:23:16 by skunert           #+#    #+#             */
/*   Updated: 2023/04/26 15:55:29 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*stack_create(int capacity)
{
	t_stack	*new_stack;

	if (capacity <= 0)
		return (NULL);
	new_stack = malloc(sizeof(t_stack));
	if (new_stack == NULL)
		return (NULL);
	new_stack->collection = malloc(sizeof(int) * capacity);
	if (new_stack->collection == NULL)
		return (free(new_stack), NULL);
	new_stack->capacity = capacity;
	new_stack->top = 0;
	return (new_stack);
}

void	stack_destroy(t_stack *stack)
{
	free(stack->collection);
	free(stack);
}

int	push(t_stack *stack, int value)
{
	if (stack->top == stack->capacity)
		return (0);
	stack->collection[stack->top] = value;
	stack->top++;
	return (1);
}

int	pull(t_stack *stack, int *value)
{
	if (stack->top == 0)
		return (0);
	stack->top--;
	*value = stack->collection[stack->top];
	return (1);
}

t_stack	*stack_init(int argc, char **argv)
{
	int		i;
	t_stack	*stack;

	i = argc - 1;
	stack = stack_create(argc - 1);
	while (stack->top != stack->capacity)
	{
		push(stack, ft_atoi(argv[i]));
		i--;
	}
	return (stack);
}
