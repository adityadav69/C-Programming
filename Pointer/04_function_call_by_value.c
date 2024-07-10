#include<stdio.h>
int sum(int,int);

int main(){
    int x=6;
    int y=5;
    printf("The value of a+b is %d\n", sum(x,y));
    printf("The value of a and b is %d %d\n",x,y );

    
    return 0;
}

int sum(int a, int b){
    a=56;
    return a+b;
}