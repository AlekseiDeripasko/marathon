#include <stdbool.h>
#include <stdio.h>

bool mx_isupper(int c);

int main(void)
{
    printf("Z is %d\n", mx_isupper('Z'));
}

bool mx_isupper(int c)
{
    if (c >= 'A' && c <= 'Z')
        return true;
    return false;
}
