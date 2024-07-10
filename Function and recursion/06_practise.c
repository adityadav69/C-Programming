#include<stdio.h>
int sum(int);

int main(){
    printf("The sum of first natural number is %d", sum(4));
    
    return 0;
}
int sum(int n){
    if(n==1){
        return 1;
    }
    return sum(n-1)+n;
}