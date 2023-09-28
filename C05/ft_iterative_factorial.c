/*
• Escribe una función iterativa que devuelva un número. Este número será el resultado
de la operación factorial a partir del número usado como parámetro.
• Si el argumento no es válido, la función debe devolver 0.
• No hay que gestionar los “int overflow”, el retorno de la función será indefinido.
• El prototipo de la función deberá ser el siguiente:
int ft_iterative_factorial(int nb);
*/

#include <unistd.h>

int ft_atoi(char *str)
{
	int res = 0;
	int sign = 1;
	int i = 0;

	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		else
			res = res * 10 + (str[i] - '0');
		i++;
	}
	return (sign * res);
}

int is_number(char *str)
{
	int i = 0;

	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int ft_iterative_factorial(int nb)
{
	int res = 1;
	
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		res *= nb;
		nb--;
	}
	return (res);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (is_number(argv[1]))
		{
			int num = ft_atoi(argv[1]);
			int factorial = ft_iterative_factorial(num);
			
			// Aquí imprimir el resultado usando write.
		}
		else
			write(1, "El argumento no es un numero valido.\n", 37);
	}
	else
		write(1, "Por favor, introduzca un numero como argumento.\n", 46);
	return (0);
}
