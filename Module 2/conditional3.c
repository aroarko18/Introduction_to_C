#include <stdio.h>

int main(){
    int money;
    printf("Enter your budget: ");
    scanf("%d", &money);

    if(money >= 5000){
        printf("I will go Cox's Bazar\n");
        if(money >= 1000){
            printf("I will also travel Saint Martin\n");
        }
        else{
            printf("I will return home\n");
        }
    }
    else{
        printf("I won't go anywhere!\n");
    }
    return 0;
}