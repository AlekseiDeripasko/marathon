#include <stdio.h>
#include <stdlib.h>

int mx_gcd(int a, int b);

int main(int argc, char *argv[])
{
    if (argc == 3)
        printf("%d\n", mx_gcd(atoi(argv[1]), atoi(argv[2])));
}
