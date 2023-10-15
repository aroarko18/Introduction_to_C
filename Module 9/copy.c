#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int m;
    scanf("%d", &m);
    int b[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }

    int arr[n + m];
    for (int i = 0; i < n; i++)
    {
        arr[i] = a[i];
    }

    int k = n;
    for (int i = 0; i < m; i++)
    {
        arr[k] = b[i];
        k++;
    }

    for (int i = 0; i < n + m; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}