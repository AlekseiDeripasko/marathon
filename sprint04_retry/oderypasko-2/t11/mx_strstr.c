#include <stdio.h>
#include <stddef.h>

int mx_strlen(const char *s);

char *mx_strchr(const char *s, int c);

int mx_strncmp(const char *s1, const char *s2, int n);

char *mx_strstr(const char *s1, const char *s2) {
    int l1 = mx_strlen(s1);
    int l2 = mx_strlen(s2);
    for (int i = 0; i <= l1 - l2; i++)
    {
        if (mx_strncmp(s1 + i, s2, l2) == 0)
            return (char *)(s1 + i);
    }
    return NULL;
}


