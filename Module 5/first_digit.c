#include <stdio.h>

int main()
{
    int x;

    do
    {
        scanf("%d", &x);
    } while (x <= 999 || x > 9999);

    while (x >= 10)
    {
        x = x / 10;
    }
    // printf("%d", x);
    if (x % 2 == 0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
    return 0;
}