#include <stdio.h>

void fun(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("I love Recursion\n");
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    fun(n);
    return 0;
}