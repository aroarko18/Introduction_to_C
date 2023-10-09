#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int even = 0, odd = 0, pos = 0, neg = 0;
    for (int i = 1; i <= n; i++)
    {
        int a;
        scanf("%d", &a);

        if (a % 2 == 0)
        {
            even += 1;
        }
        else
        {
            odd += 1;
        }

        if (a > 0)
        {
            pos += 1;
        }
        else if (a < 0)
        {
            neg += 1;
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", even, odd, pos, neg);
    return 0;
}