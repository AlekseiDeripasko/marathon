int mx_sqrt(int x)
{
    for (int i = 1; i <= x / 2; i++) 
    {
        if (i * i == x) 
            return i;
    }
    if (x == 1)
        return 1;
    return 0;
}

