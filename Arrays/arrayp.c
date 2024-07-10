#include<stdio.h>
void printnum(int arr[],int n);
int main(){
  int arr[5]={1,4,2,6,7};
  printnum(arr,5);
    
    return 0;
}
void printnum(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}