#include <stdio.h>
#include <stdlib.h>
double mx_pow_rec(double n, unsigned int pow);

int main(int argc, char *argv[])
{
    if(argc == 3)
        printf("%f\n", mx_pow_rec(atoi(argv[1]),atoi(argv[2])));
}
