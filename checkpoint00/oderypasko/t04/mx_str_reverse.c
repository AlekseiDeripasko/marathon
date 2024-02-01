void mx_str_reverse(char *s)
{
    char *temp = s;
    int len = 0;
    while (*temp != '\0')
    {
        len++;
        temp++;
    }

    for (int i = 0; i < len/2; i++)
    {
        char temp = s[i];
        s[i] = s[len-1-i];
        s[len-1-i] = temp;
    }
}

