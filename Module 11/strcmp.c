#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);

    int cmp = strcmp(a, b);
    printf("%d", cmp);
    if (cmp < 0)
    {
        printf("A Chuto\n");
    }
    else if (cmp > 0)
    {
        printf("B Chuto\n");
    }
    else
    {
        printf("Same");
    }
    return 0;
}