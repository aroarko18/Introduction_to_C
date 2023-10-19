#include <stdio.h>
#include <string.h>

int main()
{
    char c[100001];
    scanf("%s", c);
    int length = strlen(c);

    for (int i = 0; i < length; i++)
    {
        if (c[i] == ',')
        {
            c[i] = c[i] - 12;
        }
        else if (c[i] >= 'a' && c[i] <= 'z')
        {
            c[i] = c[i] - 32;
        }
        else if (c[i] >= 'A' && c[i] <= 'Z')
        {
            c[i] = c[i] + 32;
        }
    }
    printf("%s", c);
    return 0;
}