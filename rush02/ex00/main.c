/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arullo-d <arullo-d@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 10:38:38 by arullo-d          #+#    #+#             */
/*   Updated: 2023/07/23 21:31:33 by lmarquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_find_char_arg(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (1);
		i++;
	}
	return (0);
}

int	handle_one_argument(char *arg)
{
	if (ft_find_char_arg(arg) == 1)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (ft_atoi(arg) > 2147483647)
		return (0);
	ft_result(ft_rush("numbers.dict",
			ft_count_row("numbers.dict")), ft_atoi(arg));
	return (1);
}

int	handle_two_arguments(char *arg1, char *arg2)
{
	if (ft_find_char_arg(arg2) == 1)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (ft_atoi(arg2) > 2147483647)
		return (0);
	ft_result(ft_rush(arg1, ft_count_row(arg1)), ft_atoi(arg2));
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc > 3 || argc < 2)
		return (0);
	if (argc == 2 && !handle_one_argument(argv[1]))
		return (0);
	if (argc == 3 && !handle_two_arguments(argv[1], argv[2]))
		return (0);
	write(1, "\n", 1);
	return (0);
}
