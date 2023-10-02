#include <stdio.h>

int main(){
    int num1, num2;
    char p;
    // scanf("%d %d", &num1, &num2);
    // printf("%d %d", num1, num2);

    scanf("%d%c %d%c", &num1, &p, &num2, &p);
    printf("%d%c %d%c", num1, p, num2, p);
    return 0;   
}