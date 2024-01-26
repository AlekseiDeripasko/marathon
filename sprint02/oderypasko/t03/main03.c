#include <stdbool.h>
#include <stdio.h>

bool mx_isdigit(int c);

int main(void)
{
    printf("A is %d, 0 is %d, 56 is %d\n", mx_isdigit('A'), mx_isdigit(0), mx_isdigit(56));
}

bool mx_isdigit(int c)
{
    if (c >= 0 && c <= 9)
        return true;
    return false;
}
