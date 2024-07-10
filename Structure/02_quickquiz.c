#include<stdio.h>
#include<string.h>
struct employee{
    int salary;
    float rating;
    char name[10];
};

int main(){
    struct employee e1;
    e1.salary=4342332;
    e1.rating=9.3;
    strcpy(e1.name,"Aditya");
    printf("%d\n", e1.salary);
     printf("%f\n", e1.rating);
      printf("%s\n", e1.name);


      struct employee e2;
    e2.salary=88454454;
    e2.rating=23.5;
    strcpy(e2.name,"Priyanshu");
    printf("%d\n", e2.salary);
     printf("%f\n", e2.rating);
      printf("%s\n", e2.name);

      struct employee e3;
    e3.salary=9833;
    e3.rating=2.3;
    strcpy(e3.name,"Raj");
    printf("%d\n", e3.salary);
     printf("%f\n", e3.rating);
      printf("%s\n", e3.name);

    
    return 0;
}