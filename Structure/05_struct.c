#include<stdio.h>
#include <string.h>
struct employee
{
    int salary;
    float rating;
    char name[10];
};

int main(){
    struct employee e1;
    struct employee*ptr=&e1;
    (*ptr).rating=4.4;
    printf("%f", (*ptr).rating);

    
    return 0;
}