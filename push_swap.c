/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 11:55:45 by skunert           #+#    #+#             */
/*   Updated: 2023/04/26 15:52:49 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		check;
	t_stack	*stack_a;
	t_stack	*stack_b;

	check = check_input(argc, argv);
	if (check == 0 || argc - 1 == 0)
		return (0);
	stack_a = stack_init(argc, argv);
	stack_b = stack_create(argc);
	if (argc - 1 <= 3)
		small_sort_three(stack_a);
	else if (argc -1 <= 5)
		small_sort_five(stack_a, stack_b);
	else if (argc - 1 > 5)
		big_sort(stack_a, stack_b);
	stack_destroy(stack_a);
	stack_destroy(stack_b);
}
