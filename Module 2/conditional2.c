#include <stdio.h>

int main(){
    int money;
    printf("Enter your amount: ");
    scanf("%d", &money);

    if(money >= 100){
        printf("I will take Beef Burger, French Fries and a 100 Plus");
    }
    else if(money >= 50){
        printf("I will buy a happy meal");
    }
    else{
        printf("I won't take anything...");
    }
    return 0;
}