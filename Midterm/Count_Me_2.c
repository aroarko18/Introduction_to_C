#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char a[100001];
    scanf("%s", a);

    int a_length = strlen(a);

    char b[] = "aeiou";
    int count = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        for (int j = 0; b[j] != '\0'; j++)
        {
            if (a[i] == b[j])
            {
                count += 1;
            }
        }
    }
    int consonats = a_length - count;
    printf("%d", consonats);
    return 0;
}
