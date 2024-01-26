#include <stdio.h>

int mx_sum_digits(int num)
{
    if (num < 0)
        num *= -1;
    int sum = 0;
    while(num != 0)
    {
        printf("num - %d\n", num%10);
        sum += num%10;
        num /= 10;
    }
    return sum;
}

int main(void)
{
    printf("%d\n", mx_sum_digits(0));
}
