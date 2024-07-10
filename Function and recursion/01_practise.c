#include<stdio.h>
float average(float,float,float);

int main(){
    printf("The average of three number is %f", average(6,3.0,8.0) );
    
    return 0;
}
float average(float a,float b,float c){
    float average=(a+b+c)/3;
    return average;
}