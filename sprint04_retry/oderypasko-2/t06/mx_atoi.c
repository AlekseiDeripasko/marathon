#include <stdbool.h>
#include <stdio.h>

bool mx_isspace(int c);
bool mx_isdigit(int c);

int mx_atoi(const char *str)
{
    long res = 0;
    int sign = 1;
    int i = 0;
    while (mx_isspace(str[i]))
    {
        i++;
    }
    if (str[i] == '+' || str[i] == '-')
    {
        sign = str[i] == '-' ? -1 : 1;
        i++;
    }
    while (mx_isdigit(str[i]))
    {
        res += str[i] - '0';
        if (mx_isdigit(str[i + 1]))
            res *= 10;
        i++;
    }
    return sign * (int)res;   
}



