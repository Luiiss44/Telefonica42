#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (!to_find[0])
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j])
			j++;
		if (!to_find[j])
			return (str + i);
		i++;
	}
	return (0);
}

int	main(void)
{
	char str[] = "Hello, World!";
	char to_find[] = "World";
	char *res;

	res = ft_strstr(str, to_find);
	if (res)
		while (*res)
			write(1, res++, 1);
	write(1, "\n", 1);
	return (0);
}
