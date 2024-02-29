#include <stdio.h>
#include <stdlib.h>

char *mx_strnew(const int size);

char* mx_nbr_to_hex(unsigned long nbr)
{
    int size = 0;
    unsigned long temp_for_size = nbr;
    while (temp_for_size != 0)
    {
        temp_for_size /= 16;
        size++;
    }
    if (nbr == 0)
    {
        char*res = mx_strnew(1);
        res[0] = 48;
        return res;
    }
    char*res = mx_strnew(size);
    for (int i = 0; i < size; i++)
    {
        int temp = nbr%16;
        if (temp > 9)
            res[size - i - 1] = (char) 97 + temp-10;
        else
            res[size - i - 1] = (char) temp+48;
        nbr/=16;
        
    }
    return res;
}

char *mx_strnew(const int size)
{
    if(size < 0)
        return NULL;
    char *new = (char *)malloc(sizeof(char)*size+1);
    if (new == NULL)
        return NULL;
    for(int i = 0; i < size+1; i++)
    {
        new[i] = '\0';
    }
    return new;
}


