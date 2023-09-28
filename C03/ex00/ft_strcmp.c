#include <unistd.h>

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
    {
        i++;
    }
    return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int main(void)
{
    char s1[] = "Hello";
    char s2[] = "Hello";
    
    char res = '0' + ft_strcmp(s1, s2);
    write(1, &res, 1);
    write(1, "\n", 1);
    return (0);
}
