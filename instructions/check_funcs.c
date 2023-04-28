/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_funcs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 10:11:03 by skunert           #+#    #+#             */
/*   Updated: 2023/04/28 15:10:03 by skunert          ###   ########.fr       */
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
				if (argv[i][j + 1] == '\0')
					return (ft_printf("Error\n"), 0);
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
			if (ft_strncmp(argv[i], argv[j], argc - 1) == 0)
				return (ft_printf("Error\n"), 0);
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
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

	i = 1;
	while (i < argc)
	{
		if (ft_strlen(argv[i]) > 11)
			return (ft_printf("Error\n"), 0);
		if (ft_atoi_long(argv[i]) > INT_MAX
			|| (ft_atoi_long(argv[i]) < INT_MIN))
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

void	free_arr(char **arr)
{
	unsigned int	i;

	i = 0;
	while (arr[i] != NULL)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}
