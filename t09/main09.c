#include <unistd.h>

int mx_strlen(const char *s);

void mx_printstr(const char*s)
{
    write(1, s, mx_strlen(s));
}


int mx_strlen(const char *s)
{
    int i = 0;
    while (*s != '\0')
    {
        i++;
        s++;
    }
    return i;
}