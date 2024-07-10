#include<stdio.h>
int countodd(int arr[],int n);

int main(){

    int arr[10]={5,2,1,4,2,4,5,3,4,2};
    
    printf("%d", countodd(arr,10));
    
    return 0;
}
int countodd(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i] % 2!=0){
            count=count+1;
        }
    }
    return count;
}