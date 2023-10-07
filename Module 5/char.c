#include <stdio.h>

int main()
{
    char c;
    scanf("%c", &c);

    char new_char;

    if (c < 97)
    {
        new_char = c + 32;
    }
    else if (c >= 97)
    {
        new_char = c - 32;
    }

    printf("%c", new_char);
    return 0;
}