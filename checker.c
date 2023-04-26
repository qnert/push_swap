/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:09:55 by skunert           #+#    #+#             */
/*   Updated: 2023/04/26 13:54:02 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**get_stdin();

int	main(int argc, char **argv)
{
	int		check;
	char	**operations;
	t_stack	*stack_a;
	t_stack	*stack_b;

	check = check_input(argc, argv);
	if (check == 0 || argc - 1 == 0 || argc - 1 == 1)
		return (0);
	stack_a = stack_init(argc, argv);
	stack_b = stack_create(argc);
	operations = get_stdin();
	ft_printf("%s\n", *operations);
	return (0);
}

char	**get_stdin()
{
	char	*buff;
	char	*input;

	buff = ft_strdup("");
	input = get_next_line(0);
	while (buff != NULL)
	{
		input = ft_strjoin_free(input, buff);
		buff = get_next_line(0);
	}
	free (buff);
	return (ft_split(input, ' '));
}

