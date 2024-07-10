#include<stdio.h>
int fact(int a){
    if(a==1||a==0){
        return 1;
    }
    else{
        return a*fact(a-1);
    }
}

int main(){
    int n;
    printf("Enter the number\n");
    scanf("%d", &n);
    printf("The value of factorial is %d", fact(n));
    return 0;
}