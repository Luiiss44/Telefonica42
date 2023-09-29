#include <ftlib.h>

// Función auxiliar para contar el número de dígitos en un entero.
static int count_digits(int n) {
    int count = 0;
    if (n == 0)
        return 1;
    if (n < 0) {
        count++; // Para el signo negativo
        n = -n;   // Convierte n a positivo para contar los dígitos
    }
    while (n > 0) {
        count++;
        n /= 10;
    }
    return count;
}

char *ft_itoa(int n) {
    int sign = 1;
    if (n < 0) {
        sign = -1;
    }

    int num_digits = count_digits(n);
    char *result = (char *)malloc((num_digits + 1) * sizeof(char));

    if (result == NULL) {
        return NULL; // Falla la reserva de memoria
    }

    result[num_digits] = '\0'; // Carácter nulo al final de la cadena

    for (int i = num_digits - 1; i >= 0; i--) {
        result[i] = '0' + (n % 10) * sign;
        n /= 10;
    }

    if (sign == -1) {
        result[0] = '-';
    }

    return result;
}
