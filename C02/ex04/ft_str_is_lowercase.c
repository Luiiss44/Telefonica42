/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarquin <lmarquin@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 16:42:57 by lmarquin          #+#    #+#             */
/*   Updated: 2023/07/12 16:58:53 by lmarquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
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
	char *texto = "hola";
	int retorno;

	retorno = 0;
		retorno = ft_str_is_lowercase(texto);
	
	if (retorno == 1)
	{
		printf("El resultado es:%d -> Todos caracteres son minúscula", retorno);
	}
	if (retorno == 0)
	{
		printf("El resultado es:%d -> Algun caracter que no es minuscula", retorno);
	}
	return (0);
}
*/
