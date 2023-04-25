/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_funcs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 10:11:03 by skunert           #+#    #+#             */
/*   Updated: 2023/04/25 17:27:13 by skunert          ###   ########.fr       */
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
				return (ft_printf("Error\n"), 0);
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
			if (strncmp(argv[i], argv[j], argc - 2) == 0)
				return (ft_printf("Error\n"), 0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_type(int argc, char **argv)
{
	int		i;
	long	max_int;
	long	min_int;

	i = 1;
	max_int = 2147483647;
	min_int = -2147483648;
	while (i < argc)
	{
		if (ft_strlen(argv[i]) > 11)
			return (ft_printf("Error\n"), 0);
		if (ft_atoi(argv[i]) > max_int || ft_atoi(argv[i]) < min_int)
			return (ft_printf("Error\n"), 0);
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
	if (check_type(argc, argv) == 0)
		return (0);
	return (1);
}
