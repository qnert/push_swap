/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 11:55:45 by skunert           #+#    #+#             */
/*   Updated: 2023/04/29 13:52:00 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		check;
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (argc - 1 == 1)
		check = check_argv_input(argv);
	else
		check = check_input(argc, argv);
	if (check == 0 || argc - 1 == 0)
		return (0);
	if (argc - 1 == 1)
		stack_a = stack_make(argv);
	else
		stack_a = stack_init(argc, argv);
	stack_b = stack_create(argc);
	if (stack_a == NULL)
		return (stack_destroy(stack_a), stack_destroy(stack_b), 0);
	if (stack_a->top <= 3 && !is_sorted_a(stack_a))
		small_sort_three(stack_a);
	else if (stack_a->top <= 5 && !is_sorted_a(stack_a))
		small_sort_five(stack_a, stack_b);
	else if (stack_a->top > 5 && !is_sorted_a(stack_a))
		big_sort(stack_a, stack_b);
	stack_destroy(stack_a);
	stack_destroy(stack_b);
}
