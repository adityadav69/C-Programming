#include<stdio.h>

int main(){
    // char string[]={'a','d','i','t','y','a','\0'};
    char string[]="Aditya";
    // printf("%s", string);
    for(int i=0;i<7;i++){
        printf("%c", string[i]);
    }
    return 0;
}