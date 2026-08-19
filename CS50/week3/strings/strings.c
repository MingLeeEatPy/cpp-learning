#include <stdio.h>
#include <string.h>

int main(void)
{
    const char *strings[] = {"battleship", "boot", "cannon", "iron", "thimble", "tophat"};

    char s[100];
    printf("Enter a string: ");
    if (fgets(s, sizeof(s), stdin) == NULL)
    {
        return 1;
    }
    s[strcspn(s, "\n")] = '\0';
    for (int i = 0; i < 6; i++)
    {
        if (strcmp(s, strings[i]) == 0)
        {
            printf("Found %s at index %d\n", s, i);
            return 0;
        }
    }
    printf("%s not found in the array\n", s);
    return 1;
}