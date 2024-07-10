#include <stdio.h>
#include <string.h>
struct employee
{
    int salary;
    float rating;
    char name[10];
};

int main()
{
    struct employee aditya={893,3.2,"Aditya"};
    printf("%d\n", aditya.salary);
    printf("%f\n", aditya.rating);
    printf("%s\n", aditya.name);

    return 0;
}