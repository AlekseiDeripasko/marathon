#include <stdbool.h>

bool mx_isspace(char c);
bool mx_isdigit(int c);
int mx_atoi(const char *str)
{
    int counter = 1;
    bool is_minus = 0;
    int num = 0;
    const char *temp = str;
    int len = 0;
    int flag_is_num = 0;
    while (*temp != '\0')
    {
        len++;
        temp++;
    }

    for(int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '-' && i == 0)
        {
            is_minus = 1;
            counter++;
        }
        else if (str[i] == '+' && i == 0)
        {
            counter++;
        }
        else
        {
            if(str[i] >= 48 && str[i] <= 57)
            {
                if (num == 0)
                {
                    num += (int)str[i] - 48;
                    continue;
                }
                num *= 10;
                num += (int)str[i] - 48;
                flag_is_num++;
            }
            else
            {
                return 0;
            }
                
            counter++;
        }
    }
    if (is_minus)
        return num*(-1);
    return num;
}

