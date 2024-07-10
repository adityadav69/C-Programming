#include<stdio.h>

int main(){
    int n=4;
    int isprime=1;
    // printf("Enter the number to check whether number is prime or not");
    // scanf("%d", &n);
    for(int i=2;i<=n;i++){
        if(n%i==0){
            isprime=0;
            break;
        }
        if(isprime){
            printf("number is prime");
        }
        else{
             printf("number is not prime");
        }
        
        
    }
    return 0;
}