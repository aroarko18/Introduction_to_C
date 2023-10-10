#include <stdio.h>

int main()
{
    int arr[10];

    for (int i = 0; i < 5; i++)
    {
        int a;
        scanf("%d", &a);
        arr[i] = a;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}