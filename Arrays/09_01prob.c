#include<stdio.h>

int main(){
    int array[10];
    array[0]=34;
    array[1]=3;
    array[2]=36;
    int* ptr=array;
        printf("The value of array before increamenting is %d\n", *ptr);

    ptr=ptr+2;
    printf("The value of array after increamenting is %d", *ptr);
    
    return 0;
}