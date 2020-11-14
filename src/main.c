#include <stdio.h>

void other()
{
    printf("!!!!!!!!!Attention!!!!!!!!!\n"
           " ***********!hacker attack!***********\n");
}

void input()
{
    char buffer[5];
    printf("Enter text:\n");
    fflush(stdout);
    scanf("%s", buffer);
    printf("Entered: %s\n", buffer);
    fflush(stdout);
}

int main()
{
    input();
    printf("%p", &other);
    fflush(stdout);
    return 0;
}
