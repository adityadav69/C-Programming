#include<stdio.h>

int main(){
    int i=3;
    int *j=&i;
    printf("The value of i is %d", *j);
    return 0;
}