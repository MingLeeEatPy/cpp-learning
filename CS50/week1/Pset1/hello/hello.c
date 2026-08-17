#include <stdio.h>

int main(void)
{
    char name[50];
    printf("what is your name? \n");
    scanf("%s", name);
    printf("hello, %s!\n", name);
}