#include "ftlib.h"

char *ft_strjoin(char const *s1, char const *s2) {
    if (!s1 || !s2)
        return NULL;

    size_t s1_len = 0;
    while (s1[s1_len])
        s1_len++;

    size_t s2_len = 0;
    while (s2[s2_len])
        s2_len++;

    char *result = (char *)malloc((s1_len + s2_len + 1) * sizeof(char));
    if (!result)
        return NULL;

    for (size_t i = 0; i < s1_len; i++) {
        result[i] = s1[i];
    }

    for (size_t i = 0; i < s2_len; i++) {
        result[s1_len + i] = s2[i];
    }

    result[s1_len + s2_len] = '\0';

    return result;
}