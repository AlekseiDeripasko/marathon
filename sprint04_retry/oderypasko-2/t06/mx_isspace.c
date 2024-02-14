#include <stdbool.h>

bool mx_isspace(char c) {
    return c == 32 || c == '\n' || c == '\t' 
    || c == '\v' || c == '\f' || c == '\r';
}

