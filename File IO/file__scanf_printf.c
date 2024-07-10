#include<stdio.h>

int main(){
    FILE *ptr;
    int num1,num2;
    ptr=fopen("a.txt","r");
    fscanf(ptr,"%d",&num1);
    fscanf(ptr,"%d", &num2);
    fclose(ptr);
    printf("The num1 is %d\n",num1);
    printf("The num2 is %d\n",num2);
    return 0;
}