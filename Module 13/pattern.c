#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    printf("Reverse way\n");

    for (int i = n; i > 0; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}