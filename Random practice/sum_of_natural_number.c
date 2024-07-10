#include<stdio.h>
int sum(int n){
    if(n==1){
        return 1;
    }
    int su=sum(n-1)+n;
    return su;
}

int main(){
    int n;
    printf("Enter the n");
    scanf("%d", &n);
    printf("sum=%d", sum(n));
    
    return 0;
}