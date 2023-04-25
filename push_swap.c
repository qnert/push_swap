/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 11:55:45 by skunert           #+#    #+#             */
/*   Updated: 2023/04/25 14:35:42 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		check;
	t_stack	*stack_a;
	t_stack	*stack_b;

	check = check_input(argc, argv);
	if (check == 0 || argc - 1 == 0 || argc - 1 == 1)
		return (0);
	stack_a = stack_init(argc, argv);
	stack_b = stack_create(argc);
	if (argc - 1 <= 3)
		small_sort_three(stack_a);
	else if (argc -1 <= 5)
		small_sort_five(stack_a, stack_b);
	else if (argc - 1 > 5)
		big_sort(stack_a, stack_b);
	// check = stack_a->top - 1;
	// while (check >= 0)
	// {
	// 	ft_printf("%d\n", stack_a->collection[check]);
	// 	check--;
	// }
	// check = stack_b->top - 1;
	// ft_printf("\n");
	// while (check >= 0)
	// {
	// 	ft_printf("%d\n", stack_b->collection[check]);
	// 	check--;
	// }
	stack_destroy(stack_a);
	stack_destroy(stack_b);
}