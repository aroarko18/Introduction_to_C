#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    do
    {
        scanf("%d", &n);
    } while (n < 2 || n > 1000);

    int arr[n];
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (min == arr[i])
        {
            printf("%d %d", min, i + 1);
            break;
        }
    }
    return 0;
}