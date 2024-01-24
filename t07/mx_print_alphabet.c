#include <stdio.h>

void mx_printchar(char c);

void mx_print_alphabet(void)
{
    int k = -1;
    int symbol = 97;
    for (int i = 0; i < 26; i++)
    {
        symbol += 32*k;
        mx_printchar(symbol);
        //printf("%c", symbol);
        k*=-1;
        symbol++;
    }
}
