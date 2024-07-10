#include<stdio.h>
struct vector{
    int x;
    int y;
};


int main(){
    struct vector v1;
    v1.x=5;
    v1.y=7;
    printf("The first dimension is %d\n and second is %d", v1.x,v1.y);
    
    return 0;
}