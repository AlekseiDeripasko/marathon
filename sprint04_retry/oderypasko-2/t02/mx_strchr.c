#include <stddef.h>
#include <stdio.h>

char *mx_strchr(const char *s, int c)
{
    while (*s != (char)c)
    {
        if (*s == '\0')
            return NULL;
        s++;
    }
    return (char *)s;
}

