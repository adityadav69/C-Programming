#include<stdio.h>
int area(int);

int main(){
    printf("The value of area is %d", area(8));
    
    return 0;
}
int area(int a){
    int area=a*a;
    return area;
}