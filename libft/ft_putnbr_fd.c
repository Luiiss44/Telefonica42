#include "ftlib.h"

void ft_putnbr_fd(int n, int fd)
{
    char buffer[12]; // Suficientemente grande para cualquier número int y un carácter nulo
    int i = 0;

    if (n == 0)
    {
        write(fd, "0", 1);
        return;
    }

    if (n < 0)
    {
        write(fd, "-", 1);
        n = -n;
    }

    while (n > 0)
    {
        buffer[i++] = n % 10 + '0';
        n /= 10;
    }

    while (i > 0)
    {
        write(fd, &buffer[--i], 1);
    }
}
