#include <stdio.h>

int main()
{
    int a, b, c, max, min;
    scanf("%d %d %d", &a, &b, &c);

    // max value finder
    if (a >= b && a >= c)
    {
        max = a;
    }
    else if (b >= a && b >= c)
    {
        max = b;
    }
    else
    {
        max = c;
    }

    // min value finder
    if (a <= b && a <= c)
    {
        min = a;
    }
    else if (b <= a && b <= c)
    {
        min = b;
    }
    else
    {
        min = c;
    }

    printf("%d %d\n", min, max);
    return 0;
}