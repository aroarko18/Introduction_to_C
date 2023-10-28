#include <stdio.h>

int main()
{
    int x = 100;
    int *ptr = &x;

    printf("Address of x - %p\n", &x);
    printf("Value of ptr - %p\n", ptr);
    printf("Address of prt - %p\n", &ptr);
    return 0;
}