#include <stdio.h>
#include <stdlib.h>

int mx_lcm(int a, int b);

int main(int argc, char *argv[])
{
    if (argc == 3)
        printf("%d\n", mx_lcm(atoi(argv[1]), atoi(argv[2])));
}
