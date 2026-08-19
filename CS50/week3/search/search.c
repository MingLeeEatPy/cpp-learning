#include <stdio.h>


int main(void)
{
    int numbers[] = {20, 500, 10, 5, 100,1, 50, 25, 75, 200};

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for ( int i = 0; i < 10; i++)
    {
        if (numbers[i] == n)
        {
            printf("Found %d at index %d\n", n, i);
            return 0;
        }
       
    }
    printf("%d not found in the array\n", n);

}