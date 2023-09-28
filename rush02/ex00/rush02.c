/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arullo-d <arullo-d@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 13:37:37 by arullo-d          #+#    #+#             */
/*   Updated: 2023/07/23 21:32:50 by lmarquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_read_and_parse_line(int fd, t_row *line)
{
	char	c[1];
	t_row	tmp;

	tmp.key = ft_atoi(ft_get_key_row(fd));
	read(fd, c, 1);
	while (c[0] == ' ')
		read(fd, c, 1);
	if (c[0] == ':')
		read(fd, c, 1);
	while (c[0] == ' ')
		read(fd, c, 1);
	tmp.value = ft_get_value_row(fd, c);
	*line = tmp;
}

t_row	*ft_rush(char *file, int len_file)
{
	int		i;
	int		fd;
	t_row	*line;

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Dict Error\n", 11);
		return (NULL);
	}
	line = malloc(sizeof(t_row) * (len_file + 1));
	if (!line)
	{
		write(1, "Dict Error\n", 11);
		return (NULL);
	}
	i = 0;
	while (i < len_file)
	{
		ft_read_and_parse_line(fd, &line[i]);
		i++;
	}
	close(fd);
	return (line);
}

int	ft_decimal(int nb)
{
	if (nb >= 90)
		return (90);
	if (nb >= 80)
		return (80);
	if (nb >= 70)
		return (70);
	if (nb >= 60)
		return (60);
	if (nb >= 50)
		return (50);
	if (nb >= 40)
		return (40);
	if (nb >= 30)
		return (30);
	if (nb >= 20)
		return (20);
	if (nb <= 20)
		return (nb);
	return (0);
}

int	ft_mult(int nb)
{
	if (nb >= 1000000000)
		return (1000000000);
	if (nb >= 1000000)
		return (1000000);
	if (nb >= 1000)
		return (1000);
	if (nb >= 100)
		return (100);
	return (ft_decimal(nb));
}

void	ft_result(t_row *tab, int n)
{
	int	i;
	int	mult;

	i = 0;
	mult = ft_mult(n);
	if (mult >= 100)
		ft_result(tab, n / mult);
	while (tab[i].key != mult)
		i++;
	ft_putstr(tab[i].value);
	write(1, " ", 1);
	if (mult != 0 && n % mult != 0)
		ft_result(tab, n % mult);
}
