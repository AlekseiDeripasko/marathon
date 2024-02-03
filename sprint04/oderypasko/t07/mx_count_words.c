int mx_count_words(const char *str, char delimiter)
{
    int counter = 0;
	int before_delim = 0;
	char add = 1;
	for(int i = 0; str[i] != '\0'; i++)
		if(str[i] == delimiter){
			if(before_delim == 1)
            {
				before_delim = 0;
				add = 1;
			}
		}
		else
        {
		    if(add)
            {
		        counter++;
		        add = 0;
		    }
			before_delim = 1;
		}
	return counter;
}

