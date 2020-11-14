#include <stdio.h>
#include <stdlib.h>

void other() {
    printf("!!!!!!!!!Attention!!!!!!!!! ***********!hacker attack!***********\n");
    fflush(stdout);
    exit(0);
}

void input() {
    char buffer[5];
    gets(buffer);
}

int main() {
    printf("%p\n", &other);
    fflush(stdout);
    input();
    printf("The hacker couldn't break our security\n");
    return 0;
}