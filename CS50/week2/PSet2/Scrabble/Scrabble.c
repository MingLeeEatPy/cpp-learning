#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(void)
{
    //prompt user for word player 1 and player 2
    char word1[100];
    char word2[100];
    printf("Enter a word for player 1: ");
    scanf("%s", word1);
    printf("Enter a word for player 2: ");
    scanf("%s", word2);

    //compute score for word
    int score1 = 0;
    int score2 = 0;
    for (int i = 0, n = strlen(word1); i < n; i++)
    {
        score1 += tolower(word1[i]) - 'a' + 1;
    }
    for (int i = 0, n = strlen(word2); i < n; i++)
    {
        score2 += tolower(word2[i]) - 'a' + 1;
    }


    //print the winner
    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score2 > score1)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("It's a tie!\n");
    }

}