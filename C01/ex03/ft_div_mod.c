/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarquin <lmarquin@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 13:22:26 by lmarquin          #+#    #+#             */
/*   Updated: 2023/07/11 12:32:22 by lmarquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{	
	int	a;
	int	b;
	int div;
	int mod;

	a = 25;
	b = 5;
	ft_div_mod(a, b, &div, &mod);

	char	div_char = div + '0';
	char	mod_char = mod + '0';

	write(1, "División: ", 10);
	write(1, &div_char, 1);
	write(1, "\n", 1);

	write(1, "Resto: ", 7);
	write(1, &mod_char, 1);
	write(1, "\n", 1);

    return (0);
}
*/
