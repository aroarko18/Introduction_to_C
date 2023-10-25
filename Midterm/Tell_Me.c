#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int score = 0;

        int n;
        scanf("%d", &n);
        int arr[n];

        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
        }

        int x;
        scanf("%d", &x);

        for (int k = 0; k < n; k++)
        {
            if (arr[k] == x)
            {
                score = 1;
            }
        }
        if (score == 1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
