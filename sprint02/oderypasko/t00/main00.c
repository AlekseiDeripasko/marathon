int mx_strlen(const char *s);
void mx_printstr(const char*s);
void mx_is_positive(int i);

int main(void)
{
    mx_is_positive(0);
}

void mx_is_positive(int i)
{
    if (i > 0)
        mx_printstr("positive\n");
    else if (i < 0)
        mx_printstr("negative\n");
    else
        mx_printstr("zero\n"); 
}

#include <unistd.h>

int mx_strlen(const char *s);

void mx_printstr(const char*s)
{
    write(1, s, mx_strlen(s));
}


int mx_strlen(const char *s)
{
    int i = 0;
    while (*s != '\0')
    {
        i++;
        s++;
    }
    return i;
}
