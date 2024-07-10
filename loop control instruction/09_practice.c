#include<stdio.h>

int main(){
    int fact=1;
    int n;
    int i=1;
    printf("Enter the value to determine factorial");
    scanf("%d", &n);
    while(i<=n){
        fact=fact*i;
        i++;
    }
    printf("%d", fact);
    return 0;
}