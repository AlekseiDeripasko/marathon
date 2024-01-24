#include <unistd.h>

void mx_matrix_voice(void)
{
    write(1, "\7\n", 2); //???
}

int main()
{
	mx_matrix_voice();
    return 0;
}
