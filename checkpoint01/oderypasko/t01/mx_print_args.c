#include <unistd.h>

void mx_printchar(char c);
int mx_strlen(const char *s);
void mx_printstr(const char*s);

int main(int argc, char *argv[])
{
    for (int i = 1; i < argc; i++)
    {
        mx_printstr(argv[i]);
        mx_printchar('\n');
    }
}

void mx_printchar(char c)
{
    char *symbol = &c;
    write(1, symbol, 1);
}

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


