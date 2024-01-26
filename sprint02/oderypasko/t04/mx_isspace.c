#include <stdbool.h>

bool mx_isspace(char c)
{
    if (c == ' ' || c == '\t' || c == '\n' || '\v' || '\f' || '\r')
        return true;
    return false;
}
