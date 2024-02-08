int mx_strcmp(const char *s1, const char *s2);
int mx_binary_search(char **arr, int size, const char *s, int *count)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (mx_strcmp(arr[j], arr[j+1]) > 0)
            {
                char *t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        } 
    }
    int min_index = 0;
    int max_index = size-1;
    while (min_index <= max_index)
    {
        (*count)++;
        int mid_index = (max_index+min_index)/2;
        int result = mx_strcmp(arr[mid_index], s);
        if (result == 0)
            return mid_index;
        else if (result > 0)
            max_index = mid_index - 1;
        else
            min_index = mid_index + 1;
        
    }
    *count = 0;
    return -1;
}


