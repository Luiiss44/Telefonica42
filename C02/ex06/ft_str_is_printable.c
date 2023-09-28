/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarquin <lmarquin@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 17:08:59 by lmarquin          #+#    #+#             */
/*   Updated: 2023/07/12 17:22:35 by lmarquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int main(void)
{
	char *texto = "åhola";
	int retorno;

	retorno = 0;
		retorno = ft_str_is_printable(texto);
	
	if (retorno == 1)
	{
		printf("El resultado es:%d -> Todos caracteres son imprimibles", retorno);
	}
	if (retorno == 0)
	{
		printf("El resultado es:%d -> Algun caracter que no es imprimible", retorno);
	}
	return (0);
}
*/
