#include <stdio.h>
#include <string.h>

int main()
{
    char c[1001];
    scanf("%s", c);

    int length = strlen(c);
    int j = length - 1;
    int isPalindrome = 1;
    int i = 0;
    while (i < j)
    {
        if (c[i] != c[j])
        {
            isPalindrome = 0;
            break;
        }
        i++;
        j--;
    }
    if (isPalindrome == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}