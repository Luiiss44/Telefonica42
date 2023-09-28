/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarquin <lmarquin@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 19:02:19 by lmarquin          #+#    #+#             */
/*   Updated: 2023/07/12 13:28:02 by lmarquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
/*
int main(void)
{
	char mensaje_origen[] = {"Hola, que tal"};
	char destino[20];

	ft_strcpy(destino, mensaje_origen);
	printf("Cadena original: %s", mensaje_origen);
	printf("\n");
	printf("Cadena destino: %s", destino);
	return (0);
}
*/
