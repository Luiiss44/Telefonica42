/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarquin <lmarquin@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 13:55:48 by lmarquin          #+#    #+#             */
/*   Updated: 2023/07/12 16:53:57 by lmarquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char *texto = "holaquetal";
	int retorno;

	retorno = 0;
	retorno = ft_str_is_alpha(texto);
	
	if (retorno == 1)
	{
		printf("El resultado es:%d -> Todos caracteres alfabeticos", retorno);
	}
	if (retorno == 0)
	{
		printf("El resultado es:%d -> Algun caracter no alfabetico", retorno);
	}
	return (0);
}
*/
