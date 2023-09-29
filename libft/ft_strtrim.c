#include <ftlib.h>

static int is_in_set(char c, char const *set) {
    while (*set) {
        if (*set == c)
            return 1;
        set++;
    }
    return 0;
}

char *ft_strtrim(char const *s1, char const *set) {
    if (!s1 || !set)
        return NULL;

    size_t start = 0;
    size_t end = 0;

    while (s1[start] && is_in_set(s1[start], set))
        start++;

    end = start;
    while (s1[end])
        end++;

    if (start == end) {
        char *trimmed = (char *)malloc(1);
        if (!trimmed)
            return NULL;
        trimmed[0] = '\0';
        return trimmed;
    }

    while (end > start && is_in_set(s1[end - 1], set))
        end--;

    size_t trimmed_len = end - start;

    char *trimmed = (char *)malloc((trimmed_len + 1) * sizeof(char));
    if (!trimmed)
        return NULL;

    for (size_t i = 0; i < trimmed_len; i++) {
        trimmed[i] = s1[start + i];
    }
    trimmed[trimmed_len] = '\0';

    return trimmed;
}
