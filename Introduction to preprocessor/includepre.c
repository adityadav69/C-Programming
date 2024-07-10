#include<stdio.h>
#include"print.c"
#define PI 3.14
#define SQUARE(r) r*r


int main(){
    float a=PI;
    int radius=6;
    printf("The value of pi is %f\n", a);
    printf("The area of circle is %f\n",PI*SQUARE(radius));
    
    return 0;
}