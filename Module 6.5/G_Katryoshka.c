#include <stdio.h>
#include <limits.h>

int main()
{
    int eye, mouth, body;
    scanf("%d %d %d", &eye, &mouth, &body);

    int katryoshka = 0;

    for (int i = 1; i <= INT_MAX; i++)
    {
        if (eye >= 1 && mouth >= 1 && body >= 1)
        {
            eye--;
            mouth--;
            body--;
            katryoshka++;
        }
        else if (eye >= 2 && mouth >= 1 && body >= 1)
        {
            eye -= 2;
            mouth--;
            body--;
            katryoshka++;
        }
        else if (eye >= 2 && body >= 1)
        {
            eye -= 2;
            body--;
            katryoshka++;
        }
        else
        {
            break;
        }
    }
    printf("%d\n", katryoshka);
    return 0;
}