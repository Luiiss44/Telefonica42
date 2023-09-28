/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarquin <lmarquin@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 13:12:25 by lmarquin          #+#    #+#             */
/*   Updated: 2023/07/11 15:00:29 by lmarquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	contador;

	contador = 0;
	while (*str != '\0')
	{
		contador++;
		str++;
	}
	return (contador);
}
/*
int main(void)
{
    char *mensaje = "Hola, mundo!";
    int tamanio = ft_strlen(mensaje);
   	write(1, "Longitud del string: ", 21);
    printf("%d", tamanio);
    write(1, "\n", 1);

    return	(0);
}
*/
