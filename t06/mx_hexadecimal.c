#include <unistd.h>

void mx_printchar(char c);

void mx_hexadecimal(void)
{
    for (int i = 48; i < 58; i++)
    {
        mx_printchar(i);
    }
    for (int j = 65; j < 71; j++)
    {
        mx_printchar(j);
    }
    mx_printchar('\n');
}
