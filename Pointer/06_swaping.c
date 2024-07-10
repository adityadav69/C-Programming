#include <stdio.h>
void swap(int*, int*);

int main()
{
    int a = 5;
    int b = 7;
    printf("the value of a and b before swapping is %d %d\n", a, b);
    swap(&a,&b);
    printf("the value of a and b after swapping is %d and %d", a,b);

    return 0;
}
void swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}