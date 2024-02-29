#include <unistd.h>

void mx_printstr(const char*s)
{
    const char *temp = s;
    int i = 0;
    while (*temp != '\0')
    {
        i++;
        temp++;
    }
    write(1, s, i);
}

