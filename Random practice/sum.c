#include<stdio.h>
int sum(int x);

int main(){
    int num;
    printf("Enter the number to sum\n");
    scanf("%d", &num);
    int a=sum(num);
    printf("The value of sum is %d", a);
    
    return 0;
}
int sum(int x){
    if(x==1){
        return 1;
    }
    else{
    return x+sum(x-1);
}
    }
    