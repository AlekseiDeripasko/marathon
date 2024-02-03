int mx_strncmp(const char *s1, const char *s2, int n);
int mx_strlen(const char *s);
char *mx_strchr(const char *s, int c);
char *mx_strstr(const char *s1, const char *s2);

int mx_count_substr(const char *str, const char *sub)
{
    const char *temp = str;
    int count = 0;
    for (int i = 0; i < mx_strlen(temp); i++)
    {
        str = mx_strstr(str, sub);
        if (str != 0)
        {
            count++;
            str++;
        } 
		else
            break;
    }
    return count;
}

