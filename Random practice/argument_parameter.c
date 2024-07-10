#include<stdio.h>
 void gst(float price){
   price=price+(0.18+price);
  printf("%f\n", price);
}

int main(){
    float price=100.00;
    gst(price);
    printf("%f\n", price);
    return 0;
}