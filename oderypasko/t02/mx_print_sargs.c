void mx_printchar(char c);
int mx_strlen(const char *s);
void mx_printstr(const char*s);
int mx_strcmp(const char *s1, const char *s2);
 
int main(int argc, char *argv[])
{
    if (argc > 2)
    {
        for (int i = 0; i < argc; i++)
        {
            for (int j = 0; j < argc - i - 1; j++)
            {
                if (mx_strcmp(argv[j], argv[j+1]) > 0)
                {
                    char *t = argv[j];
                    argv[j] = argv[j+1];
                    argv[j+1] = t;
                }
            } 
        }
    }
    for (int i = 1; i < argc; i++)
    {
        mx_printstr(argv[i]);
        mx_printchar('\n');
    }
}


