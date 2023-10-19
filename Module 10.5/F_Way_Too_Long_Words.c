#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    char c[101];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", c);
        int length = strlen(c);
        if (length <= 10)
        {
            printf("%s\n", c);
        }
        else
        {
            printf("%c%d%c\n", c[0], length - 2, c[length - 1]);
        }
    }

    return 0;
}