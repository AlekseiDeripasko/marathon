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
    return arr[1];
}