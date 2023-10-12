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

    int posValue = 0;
    int negValue = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > 0)
        {
            posValue += arr[i];
        }
        else
        {
            negValue += arr[i];
        }
    }
    printf("%d %d", posValue, negValue);
    return 0;
}
