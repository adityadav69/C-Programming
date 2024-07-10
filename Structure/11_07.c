#include<stdio.h>
typedef struct complex{
    int real;
    int complex;
}comp;

int main(){
    comp c[5];
    for(int i=0;i<5;i++){
    printf("Enter the real %d number", i+1);
    scanf("%d", &c[i]);
    }
    return 0;
}