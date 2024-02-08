int mx_strlen(const char *s);

int mx_insertion_sort(char **arr, int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {

        int i, key, j;
        for (i = 1; i < size; i++)
        {
            char *temp = arr[i];
            key = mx_strlen(arr[i]);
            j = i - 1;
 

            while (j >= 0 && mx_strlen(arr[j]) > key)
            {
                char *t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
                j -= 1;
                count++;
            }
            arr[j + 1] = temp;

        }
    }
    return count;
}


