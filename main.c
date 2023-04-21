/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 11:55:45 by skunert           #+#    #+#             */
/*   Updated: 2023/04/21 16:07:06 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		check;
	t_stack	*stack_a;
	t_stack	*stack_b;

	check = check_input(argc, argv);
	if (check == 0 || argc - 1 <= 0)
		return (0);
	stack_a = stack_init(argc, argv);
	stack_b = stack_create(argc);
	ft_push(stack_a, stack_b);
	ft_push(stack_a, stack_b);
	ft_printf("%d\n", stack_a->collection[stack_a->top - 1]);
	stack_destroy(stack_a);
	stack_destroy(stack_b);
}
