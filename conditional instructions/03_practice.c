#include<stdio.h>

int main(){
    float income;
    printf("enter your income(2.5lac to infinty):");
    scanf("%f", &income);
    if(income>2.5&& income<=5){
        printf("you have to pay 5% tax");
    }
    else if(income>5.0 && income<=10){
        printf("you have to pay 10% tax");
    }
    else if(income>10 && income<=20){
        printf("you have to pay 20 tax");
    }
    else{
        printf("you are not eligible to pay tax to the government");
    }
    return 0;
}