#include <stdbool.h>

int mx_atoi(const char *str)
{
    int counter = 1;
    bool is_minus = 0;
    int num = 0;
    const char *temp = str;
    int len = 0;
    while (*temp != '\0')
    {
        len++;
        temp++;
    }

    for(int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '-' && counter == 1)
        {
            is_minus = 1;
            counter++;
        }
        else if (str[i] == '-' && counter != 1)
        {
            return 0;
        }
        else
        {
            if(str[i] >= 48 && str[i] <= 57)
            {
                num += (int)str[i] - 48;
                if (counter != len)
                    num *= 10;
            }
            else
                return 0;
            counter++;
        }
    }
    if (is_minus)
        return num*(-1);
    return num;
}

