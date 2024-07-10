#include<stdio.h>
int square(int n){
    n=n*n;
    printf("%d\n", n);
}
int _square(int *n){
    *n=(*n)*(*n);
    printf("%d\n", *n);
}
int main(){
    int number;
    printf("Enter the number");
    scanf("%d", &number);
    square(number);
    printf("%d\n", number);
    _square(&number);
    printf("%d", number);
    return 0;
}