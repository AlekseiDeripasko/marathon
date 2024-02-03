int mx_numular_int(const int *arr, int size)
{
    int the_most = 0;
    int num;
    for (int i = 0; i < size; i++)
    {
        int counter = 1;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
                counter++;
        }
        if (counter > the_most)
        {
            the_most = counter;
            num = arr[i];
        }
    }
    return num;
}

