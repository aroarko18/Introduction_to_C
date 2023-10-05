#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i, n;
    do
    {
        scanf("%d", &n);
    } while (n < 21 || n > 10000);

    for (i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            if (i % 7 == 0)
            {
                printf("%d\n", i);
            }
        }
    }
    return 0;
}
