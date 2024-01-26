#include <stdio.h>
#include <ctype.h>

int mx_tolower(int c);

int main(void)
{
    printf("Z is %c\n", mx_tolower('Z'));
    printf("z is %c\n", mx_tolower('z'));
    printf("z is %c\n", tolower('z'));
}
/*int main(void)
{
    printf("Z is %c\n", tolower('Z'));
    printf("z is %c\n", tolower(5));
}*/

int mx_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return c + 32;
    return c;
}
