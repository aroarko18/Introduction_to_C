#include <stdio.h>

int main()
{
    double x = 5.25;
    double *ptr = &x;
    double *ptr2 = ptr;

    *ptr2 = 100.53;

    printf("x address - %p\n", &x);
    printf("ptr address - %p\n", ptr);
    printf("ptr2 address - %p\n", ptr2);

    printf("Value of x - %0.2lf\n", x);
    printf("Value of ptr - %0.2lf\n", *ptr);
    printf("Value of ptr2 - %0.2lf\n", *ptr2);
    return 0;
}