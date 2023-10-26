#include <stdio.h>

int sum(int x, int y)
{
    int sum = x + y;
    return sum;
}

int sum(int x, int y);
int main()
{
    printf("%d", sum(5, 10));
    return 0;
}
// int sum(int x, int y)
// {
//     int sum = x + y;
//     return sum;
// }