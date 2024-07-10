#include<stdio.h>

int main(){
    char st[46];
    printf("Enter the name\n");
    gets(st);
    puts(st);
    printf("Your name is %s", st);
    return 0;
}