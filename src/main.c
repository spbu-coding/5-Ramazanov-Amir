#include <stdio.h>
#include <stdlib.h>

void other()
{
    printf("!!!!!!!!!Attention!!!!!!!!!\n"
           " ***********!hacker attack!***********\n");
    exit(0);
}

void input()
{
    char buffer[5];
    gets(buffer);
}

int main()
{
    input();
    printf("%p", &other);
    fflush(stdout);
    return 0;
}
