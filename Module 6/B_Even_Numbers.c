#include <stdio.h>

int main()
{
    int n;
    do
    {
        scanf("%d", &n);
    } while (n < 1 || n > 1000);

    if (n == 1)
    {
        printf("-1\n");
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}