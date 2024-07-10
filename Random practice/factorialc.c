#include<stdio.h>
int factorial(int n){
    if(n==0){
        return 1;
    }
    int fact;
    fact=factorial(n-1)*n;
    return fact;

   
}

int main(){
    int n;
    printf("Enter the value of n");
    scanf("%d", &n);
    printf("factorial is %d",factorial(n));
    
    
    return 0;
}