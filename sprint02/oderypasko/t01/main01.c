#include <stdbool.h>
#include <stdio.h>

bool mx_is_odd(int value);

int main(void)
{
    printf("0 is %d, 1 is %d, -2 is %d\n", mx_is_odd(0), mx_is_odd(1), mx_is_odd(-2));
}

bool mx_is_odd(int value)
{
    if (value % 2 == 0)
    {
        return false;
    }
    return true;
}
