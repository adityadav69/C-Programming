#include<stdio.h>
#include<math.h>
int area_circle(float radius,float pi){
    float area=pi*radius*radius;
    printf("%f\n", area);
}
int area_rectangle(float l,float b,float h){
    float area=l*b*h;
    printf("%f\n", area);
}
int area_square(float side){
    float area=pow(side,2);
    printf("%f\n", area);
}

int main(){
    float radius,pi,l,b,h,side;
    pi=3.14;
    printf("Enter the radius");
    scanf("%f", &radius);
    printf("Enter the l");
    scanf("%f", &l);
    printf("Enter the b");
    scanf("%f", &b);
    printf("Enter the h");
    scanf("%f", &h);
    printf("Enter the side");
    scanf("%f", &side);
    area_circle(radius,pi);
    area_rectangle(l,b,h);
    area_square(side);

    
    return 0;
}