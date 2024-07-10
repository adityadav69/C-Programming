#include<stdio.h>
void printHW(int count){
    if(count==0){
        return;
    }
    printf("Hello\n");
    printHW(count-1);
}

int main(){
    int count=10;
    printHW(count);
    return 0;
}