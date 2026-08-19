#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h> 


/// @brief 
/// @param argc 
/// @param argv 
/// @return 
int main(int argc, char *argv[])
{
    //check for correct number of command-line arguments
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    //convert key from string to integer
    int key = atoi(argv[1]);

    //prompt user for plaintext
    char plaintext[1000];
    printf("plaintext: ");
    fgets(plaintext, sizeof(plaintext), stdin);

    //encrypt plaintext using Caesar cipher
    char ciphertext[1000];
    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        if (isalpha(plaintext[i]))
        {
            char base = isupper(plaintext[i]) ? 'A' : 'a';
            ciphertext[i] = (plaintext[i] - base + key) % 26 + base;
        }
        else
        {
            ciphertext[i] = plaintext[i];
        }
    }
    ciphertext[strlen(plaintext)] = '\0'; //null-terminate the ciphertext

    //print ciphertext
    printf("ciphertext: %s\n", ciphertext);
}