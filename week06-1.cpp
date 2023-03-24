#include <stdio.h>
int main()
{
    FILE*fout=fopen("output.txt","w+");
    ///printf("Hello World");
    fprintf(fout, "Hello World\n");
}
