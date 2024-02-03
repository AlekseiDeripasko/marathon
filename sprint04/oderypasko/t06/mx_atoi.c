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
        if (mx_isspace(str[i]) && !flag_is_num)
            continue;
        else if (str[i] == '-' && !flag_is_num && str[i+1] >= 48 && str[i+1] <= 57)
        {
            is_minus = 1;
            counter++;
        }
        else if (str[i] == '+' && !flag_is_num && str[i+1] >= 48 && str[i+1] <= 57)
            continue;
        else if(!flag_is_num && (str[i] < 48 || str[i] > 57))
        {
            return 0;
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
                if (flag_is_num)
                {
                    break;
                }

            }
                
            counter++;
        }
    }
    if (is_minus)
        return num*(-1);
    return num;
}

