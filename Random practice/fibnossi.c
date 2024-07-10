#include<stdio.h>
int fibnosii(int n){
    if(n==1){
        return 1;
    }
    int fib1=fibnosii(n-1);
    int fib2=fibnosii(n-2);
    int fib=fib1+fib2;
    printf("%d", fib);
}

int main(){
    int n;
    printf("Enter the value of n");
    scanf("%d", &n);
    printf("fibnosii series are=%d", fibnosii(n));

    return 0;
}