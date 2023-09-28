/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarquin <lmarquin@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 15:42:35 by lmarquin          #+#    #+#             */
/*   Updated: 2023/07/09 20:00:44 by lmarquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*
int	main(void)
{
	char	c;
	int		number;

	number = 3;
	ft_ft(&number);
	c = (number / 10) + '0';
	write(1, &c, 1);
	c = (number % 10) + '0';
	write(1, &c, 1);
	return (0);
}
*/
