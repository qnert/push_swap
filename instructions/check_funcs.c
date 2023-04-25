/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_funcs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 10:11:03 by skunert           #+#    #+#             */
/*   Updated: 2023/04/25 15:55:42 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_int(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (j == 0 && (argv[i][j] == '-' || argv[i][j] == '+'))
			{
			}
			else if (ft_isdigit(argv[i][j]) == 0)
				return (ft_printf("Error"), 0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_dup(int argc, char **argv)
{
	int		i;
	int		j;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (strcmp(argv[i], argv[j]) == 0)
				return (ft_printf("Error"), 0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_input(int argc, char **argv)
{
	if (check_int(argc, argv) == 0)
		return (0);
	if (check_dup(argc, argv) == 0)
		return (0);
	return (1);
}
