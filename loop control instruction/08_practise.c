#include<stdio.h>

int main(){
    
    int n;
    int fact=1;

    printf("Enter the number to find factorial");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        fact=fact*i;
       
    }
     printf("factorial of number n is %d", fact);
    
    return 0;
}