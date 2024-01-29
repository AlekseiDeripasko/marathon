#include <stdbool.h>

bool mx_is_prime(int num) {
    if (num <= 1)
        return false;
    int m = num/2;
    for (int i = 2; i <= m; i++)
    {
        if(num%i==0)
            return false; 
    }
    return true;
}
