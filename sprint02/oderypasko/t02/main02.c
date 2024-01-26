#include <stdbool.h>
#include <stdio.h>
#include <ctype.h>

bool mx_isalpha(int c);

int main(void)
{
    printf("a is %d/%d\n", mx_isalpha('%'), isalpha('%'));
}

bool mx_isalpha(int c)
{
    if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return true;
    return false;
}
