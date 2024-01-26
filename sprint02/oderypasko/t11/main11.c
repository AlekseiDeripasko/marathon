#include <stdio.h>

int mx_max(int a, int b, int c)
{
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    /*else if (c >= a && c >= b)
        return c;*/
    else
        return c; 
}

int main(void)
{
    printf("%d\n", mx_max(0,1,2));
    printf("%d\n", mx_max(1,1,2));
    printf("%d\n", mx_max(-4,1,4));
    printf("%d\n", mx_max(1,1,1));
    printf("%d\n", mx_max(0,0,0));
}
