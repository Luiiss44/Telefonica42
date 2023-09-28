/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarquin <lmarquin@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 21:24:58 by lmarquin          #+#    #+#             */
/*   Updated: 2023/07/23 21:25:39 by lmarquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct t_row
{
	int		key;
	char	*value;
}	t_row;

int		ft_strlen(char *str);
int		ft_atoi(char *str);
int		ft_count_row(char *file);
void	ft_putstr(char *str);
t_row	*ft_rush(char *file, int len_file);
void	ft_read_and_parse_line(int fd, t_row *line);
char	*ft_get_value_row(int fd, char *c);
char	*ft_get_key_row(int fd);
void	ft_result(t_row *tab, int n);
int		ft_mult(int nb);
int		ft_decimal(int nb);

#endif
