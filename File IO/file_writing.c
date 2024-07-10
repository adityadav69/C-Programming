#include<stdio.h>

int main(){
    FILE* ptr;
    int num=90;
    ptr=fopen("2.txt","w");
    fprintf(ptr,"The number is %d\n",num);
    fprintf(ptr,"Thank you");
    return 0;
}