/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarquin <lmarquin@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 18:10:45 by lmarquin          #+#    #+#             */
/*   Updated: 2023/07/12 19:17:09 by lmarquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
	{
		dest[i] = '\0';
	}
	j = i;
	while (src[j] != '\0')
	{
		j++;
	}
	return j;
}

int main(void)
{
	char mensaje_origen[] = "Hola";
	char destino[10];
	unsigned int size;

	size = ft_strlcpy(destino, mensaje_origen, 5);
	printf("Cadena original: %s\n", mensaje_origen);
	printf("Cadena destino: %s\n", destino);
	printf("El tamaño de la cadena fuente es: %u\n", size);

	return 0;
}

