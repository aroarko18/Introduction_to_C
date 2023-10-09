#include <stdio.h>

int main()
{
    int num;
    do
    {
        scanf("%d", &num);
    } while (num < 10 || num > 99);

    int last_digit = num % 10;
    int first_digit = num / 10;

    if (last_digit == 0)
    {
        printf("YES\n");
    }

    else if (first_digit % last_digit == 0 || last_digit % first_digit == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}