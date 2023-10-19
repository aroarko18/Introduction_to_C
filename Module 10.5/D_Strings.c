#include <stdio.h>
#include <string.h>

int main()
{
    char a[11], b[11];
    scanf("%s", a);
    scanf("%s", b);

    int a_size = strlen(a);
    int b_size = strlen(b);
    printf("%d %d\n", a_size, b_size);

    char k[22];
    for (int i = 0; i <= a_size; i++)
    {
        k[i] = a[i];
    }

    int k_size = strlen(k);
    for (int i = 0; i <= b_size; i++)
    {
        k[k_size] = b[i];
        k_size++;
    }

    printf("%s\n", k);

    char first = a[0];
    a[0] = b[0];
    b[0] = first;

    printf("%s %s", a, b);

    return 0;
}