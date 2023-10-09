#include <stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);
    char new_char;
    if (ch >= 'a' && ch < 'z')
    {
        new_char = ch + 1;
        printf("%c", new_char);
    }
    else if (ch == 'z')
    {
        new_char = ch - 25;
        // printf("%c", new_char);
        printf("a");
    }
    return 0;
}