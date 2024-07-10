#include<stdio.h>
#include<string.h>
struct employee{
    int salary;
    float rating;
    char name[10];
};

int main(){
    struct employee e1;
    e1.salary=520;
    e1.rating=9.3;
    strcpy(e1.name,"Aditya");
    printf("%d\n", e1.salary);
     printf("%f\n", e1.rating);
      printf("%s\n", e1.name);

    
    return 0;
}