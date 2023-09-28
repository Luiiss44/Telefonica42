/*
 ft_iterative_power.c
Funciones autorizadas: Ninguna
• Escribe una función iterativa que devuelva una potencia de un número.
• Una potencia inferior a 0 devolverá 0.
• No hay que gestionar los “int overflow”, el retorno de la función será indefinido.
• Se ha decidido que 0 potencia 0 devolverá 1
• El prototipo de la función deberá ser el siguiente:
int ft_iterative_power(int nb, int power);
*/
#include <unistd.h>

int ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
    {
        return 1;
    }
    else
    {
        return 0;
    }
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

int ft_iterative_power(int nb, int power)
{
    int result = 1;
    if (power < 0)
        return (0);
    while (power > 0)
    {
        result *= nb;
        power--;
    }
    return (result);
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
    int power;

    if (argc == 3)
    {
        nb = ft_atoi(argv[1]);
        power = ft_atoi(argv[2]);
        if (nb != -1 && power != -1)
            ft_putnbr(ft_iterative_power(nb, power));
        else
            write(1, "0", 1);
        write(1, "\n", 1);
    }
    return (0);
}
