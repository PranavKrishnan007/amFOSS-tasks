#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    string he = argv[0];
    if (argc == 2)
    {
        for (int i = 0; i < strlen(argv[1]); i++)
        {
            if (isdigit(argv[1][i]) == false)
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
            else
            {
                int key =  atoi(argv[1]);
                string s = get_string("plaintext: ");
                printf("ciphertext: ");
                for (int x = 0; x < strlen(s); x++)
                {
                    int c = ((s[x] - 'a') + key) % 26;
                    int C = ((s[x] - 'a') + key) % 26;
                    if (s[x] >= 'a' && s[x] <= 'z')
                    {
                        printf("%c", c + 'a');
                    }
                    else if (s[x] >= 'A' && s[x] <= 'Z')
                    {
                        printf("%c", C + 'A');
                    }
                    else
                    {
                        printf("%c", s[x]);
                    }

                }
            }
        }
    }
    else
    {
        printf("Usage: ./caesar key\n");
    }
}
