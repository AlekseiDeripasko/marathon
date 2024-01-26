#include <stdbool.h>
#include <stdio.h>

bool mx_multiple_number(int n, int mult)
{
    if (mult % n == 0)
        return true;
    return false;
}

bool github_answer(int n, int mult)
{
    if (n % mult == 0)
        return true;
    else
        return false;
}

int main(void)
{
    printf("3,9 - %d\n", mx_multiple_number(3,9));
    printf("3,9 - %d\n", github_answer(3,9));
}
