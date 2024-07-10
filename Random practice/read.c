#include<stdio.h>

int main(){
    FILE *ptr;
    ptr=fopen("adi.txt","r");
    int i;
    fscanf(ptr,"%d", &i);
    printf("%d\n",i);
    fscanf(ptr,"%d", &i);
    printf("%d\n",i);
    fscanf(ptr,"%d", &i);
    printf("%d\n",i);
    fscanf(ptr,"%d", &i);
    printf("%d\n",i);
    fscanf(ptr,"%d", &i);
    printf("%d\n",i);
  

    return 0;
}