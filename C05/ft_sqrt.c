/*
 ft_sqrt.c
Funciones autorizadas: Ninguna
• Escribe una función que devuelva la raíz cuadrada entera de un número, si existe,
o 0 si la raíz cuadrada no es entera.
• El prototipo de la función deberá ser el siguiente:
int ft_sqrt(int nb);
*/

#include <unistd.h>

int ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return 1;
    else
        return 0;
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

int ft_sqrt(int nb)
{
    int i = 1;

    if (nb < 0)
        return 0;
    while (i * i < nb)
        i++;
    if (i * i == nb)
        return i;
    else
        return 0;
}

int main(int argc, char **argv)
{
    int nb;

    if (argc == 2)
    {
        nb = ft_atoi(argv[1]);
        if (nb != -1)
            ft_putnbr(ft_sqrt(nb));
        else
            write(1, "0", 1);
        write(1, "\n", 1);
    }
    return (0);
}
