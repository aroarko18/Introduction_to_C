#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int height = 0;

    if (n == 1)
    {
        height = 6;
    }
    else if (n == 3)
    {
        height = 7;
    }
    else if (n == 5)
    {
        height = 8;
    }
    else if (n == 7)
    {
        height = 9;
    }
    else if (n == 9)
    {
        height = 10;
    }
    else if (n == 11)
    {
        height = 11;
    }
    else if (n == 13)
    {
        height = 12;
    }
    else if (n == 15)
    {
        height = 13;
    }
    else if (n == 17)
    {
        height = 14;
    }
    else if (n == 19)
    {
        height = 15;
    }
    else if (n == 21)
    {
        height = 16;
    }

    for (int i = 1; i <= height; i++)
    {
        int star = (i * 2) - 1;
        int space = height - i + 1;

        for (int j = 1; j < space; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < star; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}