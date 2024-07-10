#include<stdio.h>
int sum(int,int);

int main(){
    printf("The sum is %d", sum(9,6));
    
    return 0;
}
int sum(int a,int b){
    int c=a+b;
    
    return c;
}