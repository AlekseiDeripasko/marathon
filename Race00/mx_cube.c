#include <stdio.h>

void mx_cube(int n);
void mx_printchar(char c);
int main()
{
    mx_cube(11);
}

void mx_cube(int n)
{
    if(n < 2)
        return;
    int right_temp_counter = n;
    
    mx_printchar(' ');
    for(int i = 0; i < n/2; i++)
    {
        mx_printchar(' ');
    }
    mx_printchar('+');
    for(int i = 0; i < n*2; i++)
    {
        mx_printchar('-');
    }
    mx_printchar('+');
    mx_printchar('\n');

    for (int i = n/2; i > 0; i--)
    {
        for(int j = 0; j<i; j++)
        {
            mx_printchar(' ');
        }
        mx_printchar('/');
        for(int j = 0; j < n*2; j++)
        {
            mx_printchar(' ');
        }
        mx_printchar('/');
        for(int j = 0; j<(n/2-i); j++)
        {
            if (i == n/2)
                break;
            mx_printchar(' ');
        }
        if (right_temp_counter)
        {
            mx_printchar('|');
            right_temp_counter--;
        }
        mx_printchar('\n');
    }
    
    mx_printchar('+');
    for(int i = 0; i < n*2; i++)
    {
        mx_printchar('-');
    }
    mx_printchar('+');
    for(int i = 0; i < n/2; i++)
    {
        mx_printchar(' ');
    }
    mx_printchar('|');
    mx_printchar('\n');

    int bool_right_edge = 0;
    int right_bottom_temp_counter = n/2 - 1;
    for(int i = 0; i < n; i++)
    {
        mx_printchar('|');
        for(int j = 0; j < n*2; j++)
        {
            mx_printchar(' ');
        }
        mx_printchar('|');
        if(!bool_right_edge)
        {
            if (right_temp_counter != 1)
            {   
                for (int i = 0; i < n/2; i++)
                {
                    mx_printchar(' ');
                }
                mx_printchar('|');
                right_temp_counter--;
            }
            else
            {
                for (int i = 0; i < n/2; i++)
                {
                    mx_printchar(' ');
                }
                bool_right_edge++;
                mx_printchar('+');
            }
        }
        else
        {
            for (int i = 0; i < right_bottom_temp_counter; i++)
            {
                mx_printchar(' '); 
            }
            right_bottom_temp_counter--;
            mx_printchar('/');
            
        }
        mx_printchar('\n');
    }

    mx_printchar('+');
    for(int i = 0; i < n*2; i++)
    {
        mx_printchar('-');
    }
    mx_printchar('+');
    mx_printchar('\n');
    
}
