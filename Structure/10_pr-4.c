#include<stdio.h>
struct name{
    int number;
    float rate;
};

int main(){

    struct name aditya;
    struct name*ptr=&aditya;
    ptr->number=9;
    ptr->rate=9.8;
    printf("Number=%d\n  rate=%f", aditya.number,aditya.rate);
    
    
    return 0;
}