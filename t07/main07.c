#include <unistd.h>

void mx_printchar(char c);

void mx_print_alphabet(void)
{
    int k = -1;
    int symbol = 97;
    for (int i = 0; i < 26; i++)
    {
        symbol += 32*k;
        mx_printchar(symbol);
        k*=-1;
        symbol++;
    }
    mx_printchar('\n');
}

int main(void)
{
    mx_print_alphabet();
}

void mx_printchar(char c)
{
    char *symbol = &c;
    write(1, symbol, 1);
}
