#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
    scanf("%d", &T);

    while (T > 0)
    {
        int N;
        scanf("%d", &N);

        char win[N + 1];
        scanf("%s", win);

        int tiger = 0, pathan = 0;

        for (int i = 0; i < N; i++)
        {
            if (win[i] == 'T')
            {
                tiger++;
            }
            else if (win[i] == 'P')
            {
                pathan++;
            }
        }

        if (tiger > pathan)
        {
            printf("Tiger\n");
        }
        else if (pathan > tiger)
        {
            printf("Pathaan\n");
        }
        else if (tiger == pathan)
        {
            printf("Draw\n");
        }
        T--;
    }
    return 0;
}
