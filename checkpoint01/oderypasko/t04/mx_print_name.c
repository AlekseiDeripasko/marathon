#include <unistd.h>

void mx_printchar(char c);
void mx_printint(int n);
int mx_strlen(const char *s);
void mx_printstr(const char*s);

int main(int argc, char *argv[])
{
    mx_printstr(argv[0]);
    mx_printchar('\n');
    mx_printint(argc);
    mx_printchar('\n');
}

void mx_printchar(char c)
{
    char *symbol = &c;
    write(1, symbol, 1);
}


void mx_printint(int n)
{
    if (n == -2147483648)
    {
        char symbol = 45;
        write(1, &symbol, 1);
        char first_num = '2';
        write(1, &first_num, 1);
        mx_printint(147483648);
        return;
    }

    int is_minus = 0;
    if(n < 0)
    {
        n *= -1;
        is_minus = 1;
    }

    int num = n;
    int len = 1;

    while (num/10 != 0)
    {
        len += 1;
        num /= 10;
    }

    int nums[len];
    for (int i = 0; i < len; i++)
    {
        nums[i] = n%10;
        n /= 10;
    }

    if (is_minus)
    {
        char symbol = 45;
        write(1, &symbol, 1);
    }

    for (int i = 0; i < len; i++)
    {
        char symbol = (char) nums[len-1-i]+48;
        write(1, &symbol, 1);
    }
}

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


