void mx_printchar(char c);
int mx_strlen(const char *s);
void mx_printstr(const char*s);
char *mx_strchr(const char *s, int c);

int main(int argc, char **argv)
{
    if (argc == 0)
        return 0;
    char *temp = mx_strchr(argv[0], '/');
    for(int i = 0; i < mx_strlen(argv[0]); i++)
    {
        if(argv[0][i] == '/')
        {
            if (mx_strchr(++temp, '/') != 0)
                temp = mx_strchr(++temp, '/');
            //mx_printstr(temp);
            //mx_printchar('\n');
		}
    }
    mx_printstr(temp);
    
    mx_printchar('\n');
}

