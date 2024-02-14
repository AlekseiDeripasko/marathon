int mx_count_words(const char *str, char delimiter)
{
	int count = 0;
	int flag_w = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
	    if (str[i] == delimiter)
            flag_w = 0;
        else if (!flag_w)
        {
            flag_w = 1;
            count++;
        }
    }
    return count;
}

