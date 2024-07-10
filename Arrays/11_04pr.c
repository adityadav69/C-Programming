#include<stdio.h>

int main(){
    int arr[11];
    int n;
    printf("enter the number to print table");
    scanf("%d", &n);
    for(int i=1;i<=10;i++){
        arr[i]=i*n;
        printf("%d\n", arr[i]);
    }
    return 0;
}