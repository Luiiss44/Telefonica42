/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarquin <lmarquin@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 14:18:37 by lmarquin          #+#    #+#             */
/*   Updated: 2023/07/11 12:44:17 by lmarquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}
/*
int	main(void)
{
	int num1 = 25;
	int num2 = 5;

	int *ptr1 = &num1;
	int *ptr2 = &num2;

	ft_ultimate_div_mod(ptr1, ptr2);
	
	printf("El resultado es: %d", *ptr1);
	printf("El resultado es: %d", *ptr2);
	
    return (0);
}
*/
