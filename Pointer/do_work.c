#include<stdio.h>
int dowork(int *a,int *b, int *sum,int *avg,int *dif){
    sum=*a+*b;
    avg=*a+*b/2;
    dif=*a-*b;
}

int main(){ 
    int a=6;
    int b=7;
    int *sum,*avg,*dif;
    // printf("Enter the value of a");
    // scanf("%d", a);
    // printf("Enter the value of b");
    // scanf("%d", &b);
    dowork(&a,&b,&sum,&avg,&dif);
    printf("%d\n", *sum);
    printf("%d\n", avg);
    printf("%d\n", dif);


    
    return 0;
}