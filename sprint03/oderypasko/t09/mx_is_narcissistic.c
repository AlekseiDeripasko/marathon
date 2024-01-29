#include <stdbool.h>

double mx_pow(double n, unsigned int pow);

bool mx_is_narcissistic(int num)
{
    if (num <= 0)
        return false;
    int temp_for_len = num;
    int temp_for_sum = num;
    int len = 1;
    while (temp_for_len/10 != 0)
    {
        temp_for_len /= 10;
        len += 1;
    }
    if (len == 1)
        return true;
    
    int sum_pow_digits = 0;

    while (temp_for_sum/10 != 0)
    {
        int last_digit = temp_for_sum % 10;
        sum_pow_digits += mx_pow(last_digit, len);
        temp_for_sum /=10;
    }

    int last_digit = temp_for_sum % 10;
    sum_pow_digits += mx_pow(last_digit, len);

    if (sum_pow_digits == num)
        return true;
    return false;
}
