void mx_arr_rotate(int *arr, int size, int shift)
{
    int t_shift = shift;
    if(size == shift%size || shift%size == 0 || shift%size == size*(-1))
        return;

    int index_new_arr = 0;
    int result_arr[size];
    t_shift %= size;
    if (t_shift > 0)
        t_shift = size - t_shift;
    else
        t_shift *= -1;       
    for (int i = t_shift; i < size; i++)
    {
        result_arr[index_new_arr] = arr[i];
        index_new_arr++;
    }   
    for (int i = 0; i < t_shift; i++)
    {
        result_arr[index_new_arr] = arr[i];
        index_new_arr++;
    }
    
    for (int i = 0; i < size; i++)
    {
        arr[i] = result_arr[i];
    }
}


