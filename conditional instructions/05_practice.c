#include<stdio.h>

int main(){
    char ch;
    printf("enter the character");
    scanf("%c", &ch);
    if(ch>=97 && ch<123){
        printf("lower case");

    }
    else{
        printf("upper case");
    }
    return 0;
}