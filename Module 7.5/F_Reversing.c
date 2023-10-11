#include <stdio.h>

int main()
{
    int n;
    do
    {
        scanf("%d", &n);
    } while (n < 1 || n > 1000);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        do
        {
            scanf("%d", &arr[i]);
        } while (arr[i] < 0 || arr[i] > 1000);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}