#include <stdio.h>
#include <string.h>

int main()
{
    char c[100];
    fgets(c, 20, stdin);
    // printf("%s\n", c);

    int size = strlen(c);
    printf("%d\n", size);
    // int count = 0;
    // int i = 0;
    // for (int i = 0; c[i] != '\0'; i++)
    // {
    //     count++;
    // }

    // while (c[i] != 0)
    // {
    //     count++;
    //     i++;
    // }
    // printf("%d", count);
    return 0;
}