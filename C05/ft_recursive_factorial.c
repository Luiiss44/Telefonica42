/*
ft_recursive_factorial.c
Funciones autorizadas: Ninguna
• Escribe una función recursiva que devuelva el factorial de un número usado como
parámetro.
• Si el argumento no es válido, la función debe devolver 0.
• No hay que gestionar los “int overflow”, el retorno de la función será indefinido.
• El prototipo de la función deberá ser el siguiente:
int ft_recursive_factorial(int nb);
*/

#include <unistd.h>

int ft_isdigit(int c)
{
    return (c >= '0' && c <= '9');
}

int ft_atoi(char *str)
{
    int i = 0;
    int number = 0;

    while (str[i])
    {
        if (!ft_isdigit(str[i]))
            return (-1);
        number = (number * 10) + (str[i] - '0');
        i++;
    }
    return (number);
}

int ft_recursive_factorial(int nb)
{
    if (nb < 0)
        return (0);
    else if (nb == 0)
        return (1);
    else
        return (nb * ft_recursive_factorial(nb - 1));
}

void ft_putnbr(int n)
{
    char c;

    if (n == -1)
    {
        write(1, "0", 1);
        return ;
    }
    if (n >= 10)
    {
        ft_putnbr(n / 10);
        ft_putnbr(n % 10);
    }
    else
    {
        c = n + '0';
        write(1, &c, 1);
    }
}

int main(int argc, char **argv)
{
    int nb;

    if (argc == 2)
    {
        nb = ft_atoi(argv[1]);
        if (nb != -1)
            ft_putnbr(ft_recursive_factorial(nb));
        else
            write(1, "0", 1);
        write(1, "\n", 1);
    }
    return (0);
}
