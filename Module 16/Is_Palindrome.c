#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int is_palindrome(char ch[])
{
    int lenght = strlen(ch);
    int left = 0;
    int right = lenght - 1;

    while (left < right)
    {
        if (ch[left] != ch[right])
        {
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    char ch[1001];
    scanf("%s", ch);

    if (is_palindrome(ch))
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }

    return 0;
}
