#include <stdio.h>

void fun(int n)
{
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (i % 2 == 0)
        {
            if (i == 0)
            {
                printf("%d", arr[i]);
            }
            else
            {
                printf("%d ", arr[i]);
            }
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    fun(n);
    return 0;
}