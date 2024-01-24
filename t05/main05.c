#include <unistd.h>

void mx_printchar(char c);

void mx_only_printable(void)
{
    for (int i = 127; i >= 32; i--)
    {
        mx_printchar(i);
    }
    mx_printchar('\n');
}

int main()
{
    mx_only_printable();
}

void mx_printchar(char c)
{
    char *symbol = &c;
    write(1, symbol, 1);
}
