/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarquin <lmarquin@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:23:15 by lmarquin          #+#    #+#             */
/*   Updated: 2023/07/11 18:52:14 by lmarquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	in	temp;
	int	cambio_realizado;

	cambio_realizado = 1;
	i = 0;
	temp = 0;
	while (cambio_realizado == 1)
	{
		cambio_realizado = 0;
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				cambio_realizado = 1;
			}
			i++;
		}
	}
}
/*
int main(void) {
    int numeros[] = {5, 2, 7, 1, 4};
    int size = 5;

	printf("Array Original:"); 
    for (int i = 0; i < size; i++)
	{
		printf("%d", numeros[i]);
    }

	ft_sort_int_tab(numeros, size);

    printf("\nArray en forma ascendente:"); 
    for (int i = 0; i < size; i++)
	{
        printf("%d", numeros[i]);
    }


    return 0;
}
*/
