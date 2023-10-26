#include <stdio.h>

int main()
{
    int x = 10;
    printf("%p\n", &x);

    int *p = &x;
    *p = 500;
    printf("%d\n", x);
    return 0;
}