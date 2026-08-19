#include <stdio.h>

int main(void)
{
    printf("What's your name?\n");
    char name[50];
    scanf("%s", name);
    printf("Hello, %s!\n", name);
    return 0;
}