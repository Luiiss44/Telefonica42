/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarquin <lmarquin@student42.madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:32:35 by lmarquin          #+#    #+#             */
/*   Updated: 2023/07/11 16:26:43 by lmarquin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	inicio;
	int	end;
	int	var_temp;

	var_temp = 0;
	inicio = 0;
	end = size - 1;
	while (inicio < end)
	{
		var_temp = tab[inicio];
		tab[inicio] = tab[end];
		tab[end] = var_temp;
		inicio++;
		end--;
	}
}
/*
int main(void) {
    int numbers[] = {1, 2, 3, 4, 5};
    int size;
	int contador;
	int i;

	i = 0;
	size = 5;
	contador = 0;
	printf("%d", size);
	
 	printf("Array original:"); 
    for (int i = 0; i < size; i++) {
		printf("%d", numbers[i]);
    }
    ft_rev_int_tab(numbers, size);

    printf("\nArray invertido:");
    for (int i = 0; i < size; i++) {
	printf("%d", numbers[i]);
	}
    return (0);
}
*/
