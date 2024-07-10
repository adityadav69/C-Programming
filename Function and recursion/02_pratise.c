#include<stdio.h>
float farenhieght(float);

int main(){
    printf("The value of farenhieght after converting is %f", farenhieght(37));
    
    return 0;
}
float farenhieght(float celcius){
    float farenhieght=(celcius*9/5)+32;
    return farenhieght;

}