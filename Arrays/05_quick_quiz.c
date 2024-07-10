#include<stdio.h>

int main(){
    int i=5;
    int* ptr=&i;
    printf("The value of i is %d\n", i);
    printf("The value of ptr is %u\n", ptr);
    printf("The address of i is %u\n", &i);
    ptr--;
    printf("The value of ptr after increament is %u\n", ptr);
    if(ptr>&i){
        printf("ptr is greater");
    }
    else{
        printf("ptr is not greater");

    }
    return 0;
}