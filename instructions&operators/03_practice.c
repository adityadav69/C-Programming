#include<stdio.h>

int main(){
    int n;
    printf("enter the number");
    scanf("%d", &n);
    printf("%d", n=n%97==0);
    return 0;
}