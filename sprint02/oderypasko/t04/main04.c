#include <stdbool.h>
#include <stdio.h>

bool mx_isspace(char c);

int main(void)
{
    printf("' ' is %d\n", mx_isspace(' '));
}

bool mx_isspace(char c)
{
    if (c == ' ' || c == '\t' || c == '\n' || c == '\v' 
                            || c ==  '\f' || c == '\r')
        return true;
    return false;
}

