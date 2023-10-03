#include <stdio.h>

int main()
{
    long long int sum = 0;
    int i;
    int n;
    printf("Enter the value untill you would like to get the sum result: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum += i;
    }

    printf("Sum of %d is %lld\n", n, sum);
    return 0;
}