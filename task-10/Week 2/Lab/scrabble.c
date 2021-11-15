#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if(score1 == score2)
    {
        printf("Tie\n");
    }
    else
    {
        printf("Player 2 wins!\n");
    }

}

int compute_score(string word)
{
    int total = 0;
    int point[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    for (int i = 0, n = strlen(word); i < n ; i ++)// TODO: Compute and return score for string
    {
        if ((word[i] >= 'a' && word[i] <= 'z')  || (word[i] >= 'A' && word[i] <= 'Z'))
        {
            if (word[i] == 'a' || word[i] == 'A')
            {
                total += point[0];
            }
            if (word[i] == 'b' || word[i] == 'B')
            {
                total += point[1];
            }
            if (word[i] == 'c' || word[i] == 'C')
            {
                total += point[2];
            }
            if (word[i] == 'd' || word[i] == 'D')
            {
                total += point[3];
            }
            if (word[i] == 'e' || word[i] == 'E')
            {
                total += point[4];
            }
            if (word[i] == 'f' || word[i] == 'F')
            {
                total += point[5];
            }
            if (word[i] == 'g' || word[i] == 'G')
            {
                total += point[6];
            }
            if (word[i] == 'h' || word[i] == 'H')
            {
                total += point[7];
            }
            if (word[i] == 'i' || word[i] == 'I')
            {
                total += point[8];
            }
            if (word[i] == 'j' || word[i] == 'J')
            {
                total += point[9];
            }
            if (word[i] == 'k' || word[i] == 'K')
            {
                total += point[10];
            }
            if (word[i] == 'l' || word[i] == 'L')
            {
                total += point[11];
            }
            if (word[i] == 'm' || word[i] == 'M')
            {
                total += point[12];
            }
            if (word[i] == 'n' || word[i] == 'N')
            {
                total += point[13];
            }
            if (word[i] == 'o' || word[i] == 'O')
            {
                total += point[14];
            }
            if (word[i] == 'p' || word[i] == 'P')
            {
                total += point[15];
            }
            if (word[i] == 'q' || word[i] == 'Q')
            {
                total += point[16];
            }
            if (word[i] == 'r' || word[i] == 'R')
            {
                total += point[17];
            }
            if (word[i] == 's' || word[i] == 'S')
            {
                total += point[18];
            }
            if (word[i] == 't' || word[i] == 'T')
            {
                total += point[19];
            }
            if (word[i] == 'u' || word[i] == 'U')
            {
                total += point[20];
            }
            if (word[i] == 'v' || word[i] == 'V')
            {
                total += point[21];
            }
            if (word[i] == 'w' || word[i] == 'W')
            {
                total += point[22];
            }
            if (word[i] == 'x' || word[i] == 'X')
            {
                total += point[23];
            }
            if (word[i] == 'y' || word[i] == 'Y')
            {
                total += point[24];
            }
            if (word[i] == 'z' || word[i] == 'Z')
            {
                total += point[25];
            }
        }
    }
    return (total);
}

