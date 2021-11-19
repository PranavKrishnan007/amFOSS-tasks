#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    int letter = 0, word = 1, sentence = 0;
    string s = get_string("Text: ");
    int n = strlen(s);
    for (int i = 0; i < n; i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) // finding letters
        {
            letter += 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] == ' ')  //finding words
        {
            word += 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '.' || s[i] == '?' || s[i] == '!') // finding sentences
        {
            sentence += 1;
        }
    }
    float L = (letter / (float) word) * 100; // value of L
    float S = (sentence / (float) word) * 100; // Value of S
    float index = round(0.0588 * L - 0.296 * S - 15.8); // index value
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 1 && index <= 16)
    {
        printf("Grade %i\n", (int) index);
    }
    else
    {
        printf("Grade 16+\n");
    }
}
