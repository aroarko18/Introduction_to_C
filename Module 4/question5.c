#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int money;
    scanf("%d", &money);
    if (money > 1000)
    {
        printf("I will buy Punjabi\n");
        int curr_money = money - 1000;
        if (curr_money >= 500)
        {
            printf("I will buy new shoes\nAlisa will buy new shoes");
        }
    }
    else
    {
        printf("Bad luck!");
    }
    return 0;
}
