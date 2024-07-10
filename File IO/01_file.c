#include<stdio.h>

int main(){
    FILE *fptr;
    fptr=fopen("Aditya.txt","w");
    char ch='a';
    fprintf(fptr,"%c",ch);
    
    return 0;
}