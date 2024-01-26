void mx_printchar(char c);

void mx_isos_triangle(unsigned int length, char c)
{
    for (unsigned int i = 0; i < length; i++)
    {
        for (unsigned int j = 0; j < i+1; j++)
        {
            mx_printchar(c);
        }
        mx_printchar('\n');        
    }    
}

int main(void)
{
    mx_isos_triangle(5, '*');
}

#include <unistd.h>

void mx_printchar(char c)
{
    char *symbol = &c;
    write(1, symbol, 1);
}
