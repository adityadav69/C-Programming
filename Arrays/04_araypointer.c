#include<stdio.h>

int main(){
    int marks[3]={1,3,4};
    int* ptr=marks;
    *ptr=89;
    ptr++;
    *ptr=99;


    printf("the marks of student 0 is %d\n", marks[0]);
    printf("the marks of student 1 is %d\n", marks[1]);
    printf("the marks of student 2 is %d\n", marks[2]);
    return 0;
}