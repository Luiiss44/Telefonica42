/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarquin <lmarquin@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:39:16 by lmarquin          #+#    #+#             */
/*   Updated: 2023/07/12 17:01:13 by lmarquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
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
	char	numeros[] = "1234354534";
	
	int retorno;

	retorno = 0;
	retorno = ft_str_is_numeric(numeros);

	if (retorno == 1)
	{
		printf("El resultado es:%d -> Todos caracteres numericos", retorno);
	}
	if (retorno == 0)
	{
		printf("El resultado es: %d -> algun caracter no numerico", retorno);
	}
	return (0);
}
*/
