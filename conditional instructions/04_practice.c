#include<stdio.h>

int main(){
    int year;
    printf("enter the year:");
    scanf("%d", &year);
    if(year%4==0){
        printf("The year you entered are leap year");
    }
    else{
        printf("The year you entered are not leap year");
    }
    return 0;
}