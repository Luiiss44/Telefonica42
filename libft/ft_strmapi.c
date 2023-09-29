#include <ftlib.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char)) {
    if (s == NULL || f == NULL) {
        return NULL; // Entradas inválidas
    }

    unsigned int length = 0;
    while (s[length] != '\0') {
        length++; // Calcula la longitud de la cadena
    }

    char *result = (char *)malloc((length + 1) * sizeof(char));

    if (result == NULL) {
        return NULL; // Falla la reserva de memoria
    }

    for (unsigned int i = 0; i < length; i++) {
        result[i] = f(i, s[i]); // Aplica la función a cada carácter
    }

    result[length] = '\0'; // Carácter nulo al final de la cadena

    return result;
}
