#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
    scanf("%d", &T);

    while (T > 0)
    {
        long long int mul, A, B, C;
        scanf("%lld %lld %lld %lld", &mul, &A, &B, &C);

        if (mul >= 0 && A >= 0 && B >= 0 && C >= 0)
        {
            if (mul % (A * B * C) == 0)
            {
                printf("%lld\n", mul / (A * B * C));
            }
            else
            {
                printf("%d\n", -1);
            }
        }
        T--;
    }
    return 0;
}
