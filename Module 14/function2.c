#include <stdio.h>

int sum(void)
{
    int x, y;
    scanf("%d %d", &x, &y);

    int sum = x + y;
    return sum;
}

int main()
{
    int result = sum();
    printf("%d", result);
    return 0;
}