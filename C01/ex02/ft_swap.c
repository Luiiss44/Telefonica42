/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarquin <lmarquin@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 20:55:35 by lmarquin          #+#    #+#             */
/*   Updated: 2023/07/09 21:28:03 by lmarquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
int	main(void)
{
	int	num1;
	int	num2;

	num1 = 10;
	num2 = 20;
	ft_swap(&num1, &num2);
	return (0);
}
*/
