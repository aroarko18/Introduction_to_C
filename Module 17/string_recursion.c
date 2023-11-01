#include <stdio.h>

int fun(char c[], int i)
{
    if (c[i] == '\0')
        return 0;
    int l = fun(c, i + 1);
    return l + 1;
}

int main()
{
    char c[6] = "Abidur";
    int length = fun(c, 0);
    printf("%d\n", length);
    return 0;
}