#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000001];
    scanf("%s", s);

    int sum = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        int digit = s[i] - '0';
        sum += digit;
    }
    printf("%d\n", sum);
    return 0;
}