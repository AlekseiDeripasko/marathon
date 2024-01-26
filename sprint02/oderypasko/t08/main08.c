#include <stdio.h>
#include <ctype.h>

int mx_toupper(int c);

int main(void)
{
    printf("Z is %c\n", mx_toupper('Z'));
    printf("z is %c\n", mx_toupper('z'));
    printf("0 is %c\n", toupper('0'));
}

int mx_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        return c - 32;
    return c;
}
