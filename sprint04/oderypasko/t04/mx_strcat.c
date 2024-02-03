int mx_strlen(const char *s);

char *mx_strcat(char *s1, const char *s2)
{
    int len = mx_strlen(s1);

    for (int i = 0; s2[i] != '\0'; i++)
    {
        s1[len + i] = s2[i];
    }

    s1[len + mx_strlen(s2)] = '\0';

    return s1;
}

