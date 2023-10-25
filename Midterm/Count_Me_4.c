#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char letter[10001];
    scanf("%s", letter);

    int alpha[26] = {0};

    for (int i = 0; letter[i] != '\0'; i++)
    {
        if (letter[i] >= 'a' && letter[i] <= 'z')
        {
            alpha[letter[i] - 'a'] += 1;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (alpha[i] > 0)
        {
            printf("%c - %d\n", 'a' + i, alpha[i]);
        }
    }
    return 0;
}
