#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    //validate the command-line argument
        //len of command-line arguments should be 2
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }

    //validate the key
    if (strlen(argv[1]) != 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }

    //check if key contains only alphabetic characters and no duplicates
    for (int i = 0; i < 26; i++)
    {
        if (!isalpha(argv[1][i]))
        {
            printf("Key must contain only alphabetic characters.\n");
            return 1;
        }
        for (int j = i + 1; j < 26; j++)
        {
            if (tolower(argv[1][i]) == tolower(argv[1][j]))
            {
                printf("Key must not contain duplicate characters.\n");
                return 1;
            }
        }
    }

     //input from the user for the key

     //print the ciphertext
}