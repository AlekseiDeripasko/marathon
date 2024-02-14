#include <stddef.h>

char *mx_strchr(const char *s, int c) {
    char *res = NULL;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == c)
            res = (char *)(s + i);
    }
    return res;
}

























