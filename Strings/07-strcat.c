#include<stdio.h>
#include<string.h>


int main(){
    char source[45]="Aditya";
    char target[43]=" is a nice boy";
    strcat(source,target);
    printf("%s",source);
    return 0;
}