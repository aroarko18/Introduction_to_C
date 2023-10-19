#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int max = INT_MIN, min = INT_MAX;
    int max_index, min_index;

    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= max)
        {
            max = arr[i];
            max_index = i;
        }
        if (arr[i] <= min)
        {
            min = arr[i];
            min_index = i;
        }
    }
    arr[max_index] = min;
    arr[min_index] = max;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}