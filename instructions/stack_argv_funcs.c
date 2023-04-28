/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_argv_funcs.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 17:11:59 by skunert           #+#    #+#             */
/*   Updated: 2023/04/28 11:51:35 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*stack_make(char **argv)
{
	char	**input;
	int		i;
	t_stack	*stack;

	if (ft_strlen(argv[1]) == 0)
		return (NULL);
	input = ft_split(argv[1], ' ');
	i = 0;
	while (input[i] != NULL)
		i++;
	stack = stack_create(i);
	while (i != 0)
		push(stack, ft_atoi(input[--i]));
	return (free_arr(input), stack);
}

int	check_argv_int(char **argv)
{
	char	**input;
	int		i;
	int		j;

	input = ft_split(argv[1], ' ');
	i = 0;
	while (input[i] != NULL)
	{
		j = 0;
		while (input[i][j] != '\0')
		{
			if (j == 0 && (input[i][j] == '-' || input[i][j] == '+'))
			{
				if (input[i][j + 1] == '\0')
					return (ft_printf("Error\n"), 0);
			}
			else if (ft_isdigit(input[i][j]) == 0)
				return (ft_printf("Error\n"), 0);
			j++;
		}
		i++;
	}
	free_arr(input);
	return (1);
}

int	check_argv_dup(char **argv)
{
	char				**input;
	int					i;
	unsigned int		j;

	input = ft_split(argv[1], ' ');
	i = 0;
	while (input[i] != NULL)
	{
		j = i + 1;
		while (input[j] != NULL)
		{
			if (ft_strncmp(input[i], input[j], ft_strlen(input[j])) == 0)
				return (ft_printf("Error\n"), 0);
			j++;
		}
		i++;
	}
	free_arr(input);
	return (1);
}

int	check_argv_type(char **argv)
{
	int		i;
	char	**input;

	i = 1;
	input = ft_split(argv[1], ' ');
	while (input[i] != NULL)
	{
		if (ft_strlen(input[i]) > 11)
			return (ft_printf("Error\n"), 0);
		if (ft_atoi_long(input[i]) > 2147483647 || (ft_atoi_long(input[i]) < -2147483648))
			return (ft_printf("Error\n"), 0);
		i++;
	}
	free_arr(input);
	return (1);
}

int	check_argv_input(char **argv)
{
	if (ft_strlen(argv[1]) == 0)
		return (0);
	if (check_argv_int(argv) == 0)
		return (0);
	if (check_argv_dup(argv) == 0)
		return (0);
	if (check_argv_type(argv) == 0)
		return (0);
	return (1);
}
