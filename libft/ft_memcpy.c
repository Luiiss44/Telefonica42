/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarquin <lmarquin@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:49:23 by lmarquin          #+#    #+#             */
/*   Updated: 2023/09/13 18:08:07 by lmarquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;
	char	*dest;
	char	*ini;

	dest = (char *)dst;
	ini = (char *)src;
	i = 0;
	while (i++ < n)
	{
		*dest = *ini;
		dest++;
		ini++;
	}
	*dst = '\0';
	return (dst);
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
