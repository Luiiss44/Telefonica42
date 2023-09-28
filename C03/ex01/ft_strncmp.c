#include <unistd.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;

    i = 0;
    while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
    {
        if (s1[i] != s2[i])
            return ((unsigned char)s1[i] - (unsigned char)s2[i]);
        i++;
    }
    return (0);
}

int main(void)
{
    char s1[] = "Hello, World!";
    char s2[] = "Hello, world!";

    write(1, (ft_strncmp(s1, s2, 7) == 0 ? "0\n" : "non-zero\n"), 9);
    write(1, (ft_strncmp(s1, s2, 8) == 0 ? "0\n" : "non-zero\n"), 9);
    return (0);
}



#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i != n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}

int main(void)
{
	char *s1 = "Hola Mundo";
	char *s2 = "Hola Mundo";
	printf("Resultado: %d\n", ft_strncmp(s1, s2, 10)); // Debería imprimir "Resultado: 0"

	s1 = "Hola Mundo";
	s2 = "HOLA MUNDO";
	printf("Resultado: %d\n", ft_strncmp(s1, s2, 10)); // Debería imprimir "Resultado: 32" (o otro número positivo)

	s1 = "HOLA MUNDO";
	s2 = "Hola Mundo";
	printf("Resultado: %d\n", ft_strncmp(s1, s2, 10)); // Debería imprimir "Resultado: -32" (o otro número negativo)

	s1 = "Hola";
	s2 = "Hola Mundo";
	printf("Resultado: %d\n", ft_strncmp(s1, s2, 10)); // Debería imprimir "Resultado: -32" (o otro número negativo)

	return (0);
}

//EL BUENO
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
		{
			if ((unsigned char)s1[i] > (unsigned char)s2[i])
				return (1);
			else
				return (-1);
		}
		i++;
	}
	if (i != n)
	{
		if ((unsigned char)s1[i] > (unsigned char)s2[i])
			return (1);
		else
			return (-1);
	}
	return (0);
}

int	main(void)
{
	char	s1[] = "Hola Mundo";
	char	s2[] = "Hola Mund";
	int	num;

	num = ft_strncmp(s1, s2, 10);
	printf("Resultado: %d\n", num);
	if (num < 0)
		printf("s1 es menor que s2 y el resultado es:%d\n", num);
	else if (num > 0)
		printf("s1 es mayor que s2 y el resultado es:%d\n", num);
	else
		printf("s1 y s2 son iguales y el resultado es:%d\n", num);
	return (0);
}

