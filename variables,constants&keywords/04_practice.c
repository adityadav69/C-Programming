#include<stdio.h>

int main(){
    int pri,rate,time,si;
    printf("enter the value of principle");
    scanf("%d", &pri);
    printf("enter the value of rate");
    scanf("%d", &rate);
     printf("enter the value of time");
    scanf("%d", &time);
    printf("simple interest is %d", si=pri*rate*time/100);
    return 0;
}