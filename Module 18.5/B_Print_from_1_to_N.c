#include <stdio.h>

void fun(int n, int i)
{
    if (i == n + 1)
        return;
    printf("%d\n", i);
    fun(n, i + 1);
}

int main()
{
    int n, i = 1;
    scanf("%d", &n);

    fun(n, i);
    return 0;
}