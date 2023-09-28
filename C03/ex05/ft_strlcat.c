#include <unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int result;

	i = 0;
	while (dest[i] && i < size)
	{
		i++;
	}
	result = i;
	j = 0;
	while (src[j] && (i + j + 1) < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i != size)
	{
		dest[i + j] = '\0';
	}
	while (src[j])
	{
		j++;
	}
	return (result + j);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	dest_len = 0;
	src_len = 0;
	while (dest[dest_len] && dest_len < size)
		dest_len++;
	while (src[src_len])
		src_len++;
	if (size <= dest_len)
		return (src_len + size);
	while (src[i] && dest_len + i + 1 < size)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	if (dest_len < size)
		dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}


int	main(void)
{
	char dest[20] = "Hola";
	char src[] = " que tal";
	unsigned int size = 20;  // Especifica el tamaño del array directamente
	unsigned int ret;

	ret = ft_strlcat(dest, src, size);
	printf("Modified string: %s\n", dest);
	printf("Return value: %u\n", ret);
	return (0);
}
