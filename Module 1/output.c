#include <stdio.h>

int main(){
    int num1, num2;
    char p;
    // scanf("%d %d", &num1, &num2);
    // printf("%d %d", num1, num2);

    // scanf("%d%c %d%c", &num1, &p, &num2, &p);
    // printf("%d%c %d%c", num1, p, num2, p);

    // scanf("%d%% %d%%", &num1, &num2);
    // printf("%d%% %d%%", num1, num2);

    // scanf("%d %d", &num1, &num2);
    // printf("%da %db", num1, num2);

    char name[20];
    int age;
    float grade;
    printf("\nwhat is your name???\n");
    gets(name);
    printf("You name: %s\n\n", name);
    printf("what is your age???\n");
    scanf("%d", &age);
    printf("Your age: %d\n\n", age);
    printf("what is your grade in last exam???\n");
    scanf("%f", &grade);
    printf("Your grade: %.2f\n", grade);
    return 0;   
}