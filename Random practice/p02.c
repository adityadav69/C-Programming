#include<stdio.h>
struct complex{
    int real;
    int imaginary;
}p;

int main(){
    struct complex number1={4,7};
    struct complex *ptr=&number1;
    printf("real=%d, imaginary=%d",ptr->real,ptr->imaginary);
    return 0;
}