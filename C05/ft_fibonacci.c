/*
ft_fibonacci.c
Funciones autorizadas: Ninguna
• Escribe una función ft_fibonacci que devuelva el n-ésimo elemento de la sucesión
de Fibonacci; El primer elemento de la serie está en el índice 0. Consideraremos que
la sucesión de Fibonacci comienza por 0, 1, 1, 2.
• No se tendrán que gestionar los overflows.
• El prototipo de la función deberá ser el siguiente:
int ft_fibonacci(int index);
• Por supuesto, ft_fibonacci tendrá que ser recursiva.
• Si el índice es inferior a 0, la función retornará -1.
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

int ft_fibonacci(int index)
{
    if (index < 0)
        return (-1);
    if (index == 0)
        return (0);
    if (index == 1)
        return (1);
    else
        return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int main(int argc, char **argv)
{
    int index;

    if (argc == 2)
    {
        index = ft_atoi(argv[1]);
        if (index != -1)
            ft_putnbr(ft_fibonacci(index));
        else
            write(1, "0", 1);
        write(1, "\n", 1);
    }
    return (0);
}
