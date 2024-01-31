#include <stdio.h>

void mx_printchar(char c);
void mx_pyramid(int n)
{
    if (n < 2 || n%2 != 0)
        return;
    int front_edge = 1;
    int first_half = 1;
    int second_half = n/2-1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            mx_printchar(' ');
        }
        if (i != n-1)
            mx_printchar('/');
        if (i == 0)
            mx_printchar('\\');
        else if(i == n-1)
        {
            mx_printchar('/');
            for (int i = 0; i < n*2 - 3; i++)
            {
                mx_printchar('_');
            }
            mx_printchar('\\');
            mx_printchar('|');
        }
        else
        {
            for (int j = 0; j < front_edge; j++)
            {
                mx_printchar(' ');   
            }
            front_edge += 2;
            mx_printchar('\\');
            if (first_half <= n/2 - 1)
            {
                for(int i = 0; i < first_half; i++)
                {
                    mx_printchar(' ');
                }
                mx_printchar('\\');
                first_half++;
            }
            else
            {
                for(int i = 0; i < second_half; i++)
                {
                    mx_printchar(' ');
                }
                mx_printchar('|');
                second_half--;
            }

        }


        mx_printchar('\n');
    }
    
}

int main()
{
    mx_pyramid(100);
}
