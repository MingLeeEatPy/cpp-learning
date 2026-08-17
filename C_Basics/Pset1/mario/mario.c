#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        printf("Height: \n");
        scanf("%d", &height);
    }
    while (height < 1 );
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < height - i - 1; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < i + 1; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}
