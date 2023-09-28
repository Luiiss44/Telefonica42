/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarquin <lmarquin@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 17:45:31 by lmarquin          #+#    #+#             */
/*   Updated: 2023/07/12 18:10:03 by lmarquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == str[0])
		{
			str[i] = str[i] - 32;
		}
		if ((str[i] >= 'a' && str[i] <= 'z') && str[i - 1] == ' ')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*
int main(void)
{
	char texto[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char *destino;

	destino = ft_strcapitalize(texto);
	
	printf("El texto en mayusculas: %s", destino);
	return (0);
}
*/
