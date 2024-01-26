#include <stdio.h>

int mx_mid(int a, int b, int c)
{
    int arr[] = {a,b,c};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2 - i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        } 
    }
    printf("%d %d %d\n", arr[0], arr[1], arr[2]);
    return arr[1];
}

int main(void)
{
    printf("%d\n",mx_mid(-2,7,-5));
}
