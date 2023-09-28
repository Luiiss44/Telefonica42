/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarquin <lmarquin@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 20:04:07 by lmarquin          #+#    #+#             */
/*   Updated: 2023/07/12 18:35:37 by lmarquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i++ < n)
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
	char mensaje_origen[] = "Hola, que tal";
	char destino[20];

	ft_strncpy(destino, mensaje_origen, 20);
	printf("Cadena original: %s", mensaje_origen);
	printf("\n");
	printf("Cadena destino: %s", destino);
	return (0);
}
*/
