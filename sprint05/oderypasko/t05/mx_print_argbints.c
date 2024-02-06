#include <stdbool.h>

void mx_printchar(char c);
void mx_printint(int n);
bool mx_isspace(char c);
bool mx_isdigit(int c);
int mx_atoi(const char *str);

int main(int argc, char *argv[]) {
    for (int i = 1; i < argc; i++)
    {
        int num = mx_atoi(argv[i]);
        for (int i = sizeof(int) * 8 - 1; i >= 0; i--)
        {
            int bit = (num >> i) & 1;
            mx_printint(bit);
        }
        mx_printchar('\n');
    }
    return 0;
}

