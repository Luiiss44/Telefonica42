#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int	main(void)
{
	char dest[100] = "Hello, ";
	char src[] = "World!";
	
	write(1, ft_strcat(dest, src), 13);
	write(1, "\n", 1);
	return (0);
}
