#include <stdio.h>

int main()
{
    int n;
    do
    {
        scanf("%d", &n);
    } while (n < 2 || n > 1000);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] <= 10)
        {
            printf("A[%d] = %d\n", i, arr[i]);
        }
    }
    return 0;
}