#include<stdio.h>
#include<string.h>


int main(){
    char source[]="Aditya";
    char target[443];
    strcpy(target,source);
    printf("%s",target);
    return 0;
}