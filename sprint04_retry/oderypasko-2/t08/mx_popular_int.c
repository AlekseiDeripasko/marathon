int mx_popular_int(const int *arr, int size) 
{
    int d_c = 0;
    int max_count = 0;
    int ans = 0;
    for (int i = 0; i < size; ++i) 
    {
        for (int j = 0; j < size; ++j)
        {
            if (arr[i] == arr[j])
            {
                d_c++;
                if (d_c > max_count)
                {
                  max_count = d_c;
                  ans = arr[i];
                }
            }
        }
        d_c = 0;
    }
    return ans;
}
