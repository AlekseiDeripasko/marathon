int mx_factorial_iter(int n)
{
    if (n < 0)
        return 0;
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        long int temp = (long)factorial*i;
        if(temp > 2147483647)
            return 0;
        factorial*=i;
    }
    return factorial;
}

