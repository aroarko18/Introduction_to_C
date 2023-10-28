#include <stdio.h>

void fun(int x)
{
    printf("Address of x %p\n", &x);
}

int main()
{
    int x = 10;
    fun(x);
    printf("Adress of x in main %p\n", &x);

    return 0;
}