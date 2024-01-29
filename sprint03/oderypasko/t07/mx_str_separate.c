void mx_printchar(char c);

void mx_str_separate(const char *str, char delim)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == delim && str[i+1] != delim)
        {
            mx_printchar('\n');
            i++;
        }
        else if (str[i] == delim && str[i+1] == delim)
            i++;
        else
        {
            mx_printchar(str[i]);
            i++;
        }
    }
    mx_printchar('\n');
}

