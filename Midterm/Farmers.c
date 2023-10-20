#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    scanf("%d", &t);

    int m1, m2, d;

    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d", &m1, &m2, &d);

        int new_days = (m1 * d) / (m1 + m2);
        int saved_days = d - new_days;
        printf("%d\n", saved_days);
    }

    return 0;
}
