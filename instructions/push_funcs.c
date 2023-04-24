/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_funcs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 12:19:22 by skunert           #+#    #+#             */
/*   Updated: 2023/04/24 14:03:10 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_push_b(t_stack *stack_a, t_stack *stack_b)
{
	int	*tmp;
	int	i;

	tmp = &i;
	i = 0;
	if (stack_a->top == 0)
		return ;
	pull(stack_a, tmp);
	push(stack_b, i);
	ft_printf("pb\n");
}

void	ft_push_a(t_stack *stack_a, t_stack *stack_b)
{
	int	*tmp;
	int	i;

	tmp = &i;
	i = 0;
	if (stack_a->top == 0)
		return ;
	pull(stack_b, tmp);
	push(stack_a, i);
	ft_printf("pa\n");
}
