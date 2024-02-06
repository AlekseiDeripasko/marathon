int mx_factorial_rec(int n)
{
    if (n > 12)
        return 0;
    if (n < 0)
        return 0;
    if (n == 0)
        return 1;
    else
    {
        return n*mx_factorial_rec(n-1);
    }
}
