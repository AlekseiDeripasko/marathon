#include <stddef.h>

int mx_strlen(const char *s);
char *mx_strchr(const char *s, int c);
int mx_strncmp(const char *s1, const char *s2, int n);
char *mx_strstr(const char *s1, const char *s2);

int mx_count_substr(const char *str, const char *sub)
{
    if (sub == NULL || mx_strlen(sub) == 0)
        return 0;

    int res = 0;
    int lensub = mx_strlen(sub);
    int len = mx_strlen(str);

    for (int i = 0; i <= len - lensub; i++)
    {
        if (mx_strncmp(str + i, sub, lensub) == 0)
            res++; 
    }
    return res;
}

