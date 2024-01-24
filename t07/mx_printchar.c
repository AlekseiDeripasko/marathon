#include <unistd.h>

void mx_printchar(char c)
{
    char *symbol = &c;
    write(1, symbol, 1);
}

/*int main()
{
	mx_printchar(97);
    write(1, "\n", 1);
    return 0;
}*/
