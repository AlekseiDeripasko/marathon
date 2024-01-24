#include <unistd.h>

int mx_strlen(const char *s);

void mx_printstr(const char*s)
{
    write(1, s, mx_strlen(s));
    write(1, "\n", 1);
}

int main()
{
    mx_printstr("What");
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
// 23:17