#include <stdio.h>

int main()
{
    int a, b;
    do
    {
        scanf("%d %d", &a, &b);
    } while (a < 1 || b < 1 || a > 1e9 || b > 1e9);

    if (a - b >= 0)
    {
        printf("%d\n", a - b);
    }
    else
    {
        printf("0");
    }

    return 0;
}