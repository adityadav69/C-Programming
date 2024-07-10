#include<stdio.h>

int main(){
    for(int i=0;i<=5;i++){
        if(i==3){
            continue;
        }
        printf("the value of i is %d\n", i);
    }
    return 0;
}