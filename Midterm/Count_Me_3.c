#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int t;
    char c[10001];
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int capital = 0, small = 0, digit = 0;

        scanf("%s", c);
        for (int j = 0; c[j] != '\0'; j++)
        {
            if (c[j] >= 'A' && c[j] <= 'Z')
            {
                capital++;
                // break;
            }
            else if (c[j] >= 'a' && c[j] <= 'z')
            {
                small++;
                // break;
            }
            else if (c[j] >= '0' && c[j] <= '9')
            {
                digit++;
                // break;
            }
        }
        printf("%d %d %d\n", capital, small, digit);
    }
    return 0;
}
