/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arullo-d <arullo-d@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 20:07:48 by arullo-d          #+#    #+#             */
/*   Updated: 2023/07/23 21:30:29 by lmarquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_atoi(char *str)
{
	int	res;
	int	i;

	res = 0;
	i = 0;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res);
}

int	ft_count_row(char *file)
{
	int		row;
	int		fd;
	int		res_read;
	char	c[1];

	row = 1;
	res_read = 1;
	fd = open(file, O_RDONLY);
	if (fd == -1 || fd < 0)
		return (-1);
	while (res_read > 0)
	{
		res_read = read(fd, c, 1);
		if (c[0] == '\n')
			row++;
	}
	close(fd);
	return (row);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}
