#include <ftlib.h>

static size_t count_words(char const *s, char c) {
    size_t count = 0;
    int in_word = 0;

    while (*s) {
        if (*s == c) {
            if (in_word)
                in_word = 0;
        } else {
            if (!in_word) {
                count++;
                in_word = 1;
            }
        }
        s++;
    }

    return count;
}

static size_t word_length(char const *s, char c) {
    size_t len = 0;
    while (s[len] && s[len] != c)
        len++;
    return len;
}

char **ft_split(char const *s, char c) {
    if (!s)
        return NULL;

    size_t word_count = count_words(s, c);

    char **result = (char **)malloc((word_count + 1) * sizeof(char *));
    if (!result)
        return NULL;

    size_t word_index = 0;

    while (*s) {
        if (*s == c) {
            s++;
            continue;
        }

        size_t word_len = word_length(s, c);

        result[word_index] = (char *)malloc((word_len + 1) * sizeof(char));
        if (!result[word_index])
            return NULL;

        for (size_t i = 0; i < word_len; i++) {
            result[word_index][i] = *s;
            s++;
        }

        result[word_index][word_len] = '\0';
        word_index++;
    }

    result[word_count] = NULL;

    return result;
}
