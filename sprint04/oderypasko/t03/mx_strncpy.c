char *mx_strncpy(char *dst, const char *src, int len)
{
    if (len < 0)
        return 0;
    for(int i = 0; i < len && src[i] != '\0'; i++)
    {	
        dst[i] = src[i];
        if (i == len - 1 && dst[i] != '\0')
            dst[i+1] = '\0';
    }
	return dst;
}

