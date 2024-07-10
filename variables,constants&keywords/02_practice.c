#include<stdio.h>

int main(){
    int radius;
    float pi=3.14;
    float area;
    int hieght;
    float volume;
    printf("enter the value of radius\n");
    scanf("%d", &radius);
    printf("enter the value of hieght\n");
    scanf("%d", &hieght);
    printf("area of circle is %f\n", area=pi*radius*radius);
    printf("volume of cylinder is %f", volume=pi*radius*radius*hieght);
    return 0;
}