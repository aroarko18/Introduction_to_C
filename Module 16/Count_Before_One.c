#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int count_before_one(int n)
{
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 1)
        {
            count = count + 1;
        }
        else
        {
            break;
        }
    }
    return count;
}

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int n;
    scanf("%d", &n);

    printf("%d", count_before_one(n));
    return 0;
}
