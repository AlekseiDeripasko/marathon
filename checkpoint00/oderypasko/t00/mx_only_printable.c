#include <unistd.h>

void mx_only_printable(void)
{
    for (int i = 126; i >= 32; i--)
    {
        char symbol = i;
        write(1, &symbol, 1);
    }
    char newline = '\n';
    write(1, &newline, 1);
}

