#include<stdio.h>

int main(){
    int arr[11];
    for(int i=1;i<=10;i++){
        arr[i]=5*(i);
        printf("The 5*%d is %d\n", i,arr[i]);
    }
    return 0;
}