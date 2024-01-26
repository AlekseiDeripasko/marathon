#include <stdbool.h>
#include <stdio.h>

bool mx_islower(int c);

int main(void)
{
    printf("Z is %d\n", mx_islower('Z'));
}

bool mx_islower(int c)
{
    if (c >= 'a' && c <= 'z')
        return true;
    return false;
}
