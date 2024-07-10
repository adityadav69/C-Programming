#include<stdio.h>
double force(double,double);

int main(){
    double g=9.8;
    printf("The value of force is %lf", force(5,g));
    
    return 0;
}
double force(double mass,double g){
    double force=mass*g;
    return force;
}