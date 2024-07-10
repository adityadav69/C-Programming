#include<stdio.h>
// void swap(int a,int b){
//     int t;
//     t=a;
//     a=b;
//     b=t;
//     printf("x=%d y=%d\n", a,b);
// }
void _swap(int *a,int *b){
    int t;
    t=*a;
    *a=*b;
    *b=t;
    printf("x=%d  y=%d\n",*a,*b);
}

int main(){
    int x,y;
    x=5;
    y=4;
    // swap(x,y);
    // printf("x=%d y=%d\n", x,y);
    _swap(&x,&y);
    printf("x=%d y=%d\n", x,y);
    
    return 0;
}