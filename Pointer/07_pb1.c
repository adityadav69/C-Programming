#include<stdio.h>

int main(){
    int a=5;
    int *j;
    j=&a;
    printf("The address of variable a is %d\n", &a);
    // or
    printf("The address of variable a is %u\n", j);
    printf("The value of a is %d\n", *(j));
    // or
    printf("The value of a is %d", *(&a));
    
    return 0;
}