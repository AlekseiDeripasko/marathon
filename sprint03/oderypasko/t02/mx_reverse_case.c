#include <stdbool.h>

bool mx_islower(int c);
bool mx_isupper(int c);
int mx_tolower(int c);
int mx_toupper(int c);

void mx_reverse_case(char *s)
{
    int i = 0;
    char temp = s[i];
    while (temp != '\0') {
        if (mx_islower(s[i]) == 1) 
            s[i] =  mx_toupper(temp);
        else if (mx_isupper(s[i]) == 1) 
            s[i] = mx_tolower(temp);
        i++;
        temp = s[i];
    }
}
