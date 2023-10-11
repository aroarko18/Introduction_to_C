#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int f_num, index = 0;
    scanf("%d", &f_num);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == f_num)
        {
            index = i;
            break;
        }
        else
        {
            index = -1;
        }
    }
    printf("%d\n", index);
    return 0;
}