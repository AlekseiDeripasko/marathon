#include <stdio.h>
#include <stdlib.h>

int mx_factorial_rec(int n);

int main(int argc, char *argv[])
{
    if (argc == 2)
        printf("%d\n", mx_factorial_rec(atoi(argv[1])));
}
