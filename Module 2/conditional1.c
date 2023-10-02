#include <stdio.h>

int main(){
    int usd;
    printf("Enter your amount: \n");
    scanf("%d", &usd);

    if(usd == 100){
        printf("I will go to Starbucks");
    }
    else{
        printf("I won't go anywhere!");
    }

    return 0;
}