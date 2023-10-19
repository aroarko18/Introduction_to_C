#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int n;
    scanf("%d", &n);

    int arr[n];
    int div_2 = 0, div_3 = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
        if (arr[i] % 2 == 0)
        {
            div_2++;
            continue;
        }
        else if (arr[i] % 3 == 0)
        {
            div_3++;
            continue;
        }
    }
    printf("%d %d", div_2, div_3);

    return 0;
}
