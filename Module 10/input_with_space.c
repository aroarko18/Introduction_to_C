#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    // gets(a);
    fgets(a, 20, stdin);
    printf("%s", a);
    return 0;
}