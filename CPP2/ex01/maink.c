#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv)
{
    if (argc == 2)
    {
        unsigned int a = (unsigned int)atoi(argv[1]);
        unsigned int sht = a >> 1;
        int sht2 = a << 8;
        printf("a \t= \t%d\nrsh\t= \t%d\nlsh\t = \t%d\n", a, sht, sht2);
    }
	return (0);
}
