/*
ft_is_prime.c
Funciones autorizadas: Ninguna
• Escribe una función que devuelva 1 si el número es primo y 0 si el número no lo es.
• El prototipo de la función deberá ser el siguiente:
int ft_is_prime(int nb);
0 y 1 no son números primos.
*/
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

int	ft_is_prime(int nb)
{
	int i;

	if (nb <= 1)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	i = 5;
	while (i * i <= nb)
	{
		if (nb % i == 0 || nb % (i + 2) == 0)
			return (0);
		i += 6;
	}
	return (1);
}

int	main(void)
{
	int nb = 47;
	ft_putnbr(ft_is_prime(nb));
	ft_putchar('\n');
	return (0);
}
