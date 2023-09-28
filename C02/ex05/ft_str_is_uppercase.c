/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarquin <lmarquin@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 17:02:07 by lmarquin          #+#    #+#             */
/*   Updated: 2023/07/12 17:09:44 by lmarquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
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
	char *texto = "HOLa";
	int retorno;

	retorno = 0;
		retorno = ft_str_is_uppercase(texto);
	
	if (retorno == 1)
	{
		printf("El resultado es:%d -> Todos caracteres son mayuscula", retorno);
	}
	if (retorno == 0)
	{
		printf("El resultado es:%d -> Algun caracter que no es mayuscula", retorno);
	}
	return (0);
}
*/
