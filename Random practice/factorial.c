#include<stdio.h>
int factorial(int x);

int main(){
    int n;
    printf("Enter the number you want to know factorial\n");
    scanf("%d", &n);
    int a=factorial(n);
    printf("Value of factorial is %d", a);
    
    return 0;
}
int factorial(int x){
    if(x==1|| x==0){
        return 1;
    }
    else{
        return x*factorial(x-1);
    }
}