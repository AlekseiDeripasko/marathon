#include <stdio.h>
#include <stdlib.h>

char *mx_strcpy(char *dst, const char* src);
int mx_strlen(const char *s);
char *mx_strnew(const int size);

char *mx_strdup(const char *str)
{
    char *new = mx_strnew(mx_strlen(str));
    mx_strcpy(new, str);
    return new;
}


char *mx_strcpy(char *dst, const char* src)
{
    int i = 0;
    while (src[i] !=  '\0')
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return dst;
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

char *mx_strnew(const int size)
{
    int count = 0;
    if(size < 0)
        return NULL;
    char *new = (char *)malloc(sizeof(char)*size+1);
    if (new == NULL)
        return NULL;
    for(int i = 0; i < size+1; i++)
    {
        new[i] = '\0';
        count++;
    }
    return new;
}



