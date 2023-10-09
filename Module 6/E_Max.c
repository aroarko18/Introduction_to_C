#include <stdio.h>
#include <limits.h>

int main()
{
    int n, max, min;
    max = INT_MIN;
    min = INT_MAX;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int a;
        scanf("%d", &a);

        if (a > max)
        {
            max = a;
        }
        if (a < min)
        {
            min = a;
        }
    }
    printf("%d %d\n", min, max);
    return 0;
}