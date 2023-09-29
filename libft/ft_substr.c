#include <stdlib.h>


char *ft_substr(char const *s, unsigned int start, size_t len) {
    if (!s)
        return NULL;

    size_t s_len = 0;
    while (s[s_len])
        s_len++;

    if (start >= s_len)
        return NULL;

    size_t substr_len;
    if (s_len - start < len) {
        substr_len = s_len - start;
    } else {
        substr_len = len;
    }

    char *substr = (char *)malloc((substr_len + 1) * sizeof(char));
    if (!substr)
        return NULL;

    for (size_t i = 0; i < substr_len; i++) {
        substr[i] = s[start + i];
    }
    substr[substr_len] = '\0';

    return substr;
}
