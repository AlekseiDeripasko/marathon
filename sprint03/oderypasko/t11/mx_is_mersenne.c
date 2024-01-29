#include <stdbool.h>

bool mx_is_prime(int num);
double mx_pow(double n, unsigned int pow);

bool mx_is_mersenne(int n)
{
    if (n <= 2)
        return false;
    int temp = n;
    temp++;
    int i = 0;
    while(temp > mx_pow(2,i))
    {
        i++;
    }
    if (temp == mx_pow(2, i) && mx_is_prime(n))
        return true;
    return false;
}

