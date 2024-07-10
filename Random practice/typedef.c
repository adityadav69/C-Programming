#include<stdio.h>
typedef struct student{
    int roll;
    float cgpa;
    char name[20];
}st;

int main(){
    st s1={4,5.6,"aditya"};
    printf("%d", s1.roll);

    return 0;
}