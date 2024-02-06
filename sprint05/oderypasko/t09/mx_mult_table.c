int mx_atoi(const char *str);
void mx_printint(int n);
void mx_printchar(char c);

int main(int argc, char *argv[])
{
	if (argc == 3) {
		int min_n = mx_atoi(argv[1]);
		int max_n = mx_atoi(argv[2]);
		if (min_n < 0 || max_n < 0
			|| min_n > 9 || max_n > 9)
        {
			return 0;
		}
		if (min_n > max_n)
        {
			max_n = min_n;
			min_n = mx_atoi(argv[2]);
		}
		for (int i = min_n; i <= max_n; i++)
        {
			for (int j = min_n; j <= max_n; j++)
            {
				mx_printint(i * j);
				if (j != max_n) 
					mx_printchar('\t');
			}
			mx_printchar('\n');	
		}			
	}
	return 0;
}

