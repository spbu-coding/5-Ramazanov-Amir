#include <stdio.h>
#include <stdlib.h>

void other()
{
    printf("!!!!!!!!!Attention!!!!!!!!!\n"
           " ***********!hacker attack!***********\n");
    fflush(stdout);
    exit(0);
}

void input()
{
    char buffer[5];
    fflush(stdout);
    gets(buffer);
}

int main()
{
    printf("%p", &other);
    input();
    printf("well\n");
    fflush(stdout);
    return 0;
}
