#include <stdio.h>
void avgsum(float, float, float *, float *);

int main()
{
    float a = 7;
    float b = 4;
    // float sum,average;
    // avgsum(a,b,&sum,&average);
   float *ptr1=a+b;
   float *ptr2=(a+b)/2;
    
    
    printf("The value of sum is %f and avg is %f", sum,average)  ;

            return 0;
}
void avgsum(float a, float b, float *ptr1, float *ptr2)
{
    *ptr1=a+b;
    *ptr2=(a+b)/2;
}