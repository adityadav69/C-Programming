#include<stdio.h>
#include <string.h>
struct employee
{
    int salary;
    float rating;
    char name[10];
};
void show(struct employee emp);

int main(){
    struct employee e1;
    struct employee*ptr=&e1;
    e1.salary=8989;
    e1.rating=2.4;
    strcpy(e1.name,"aditya");
    show(e1);

    
    return 0;
}
void show(struct employee emp){
    printf("Salry of emp is %d\n", emp.salary);
    printf("rating of emp is %f\n", emp.rating);
    printf("Name of emp is %s\n", emp.name);
   emp.rating=0000;
}