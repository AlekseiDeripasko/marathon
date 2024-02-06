#include <stdio.h>
#include <stdlib.h>

int mx_factorial_iter(int n);

int main(int argc, char *argv[])
{
    if (argc == 2)
        printf("%d\n", mx_factorial_iter(atoi(argv[1])));
}
