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
    struct employee facebook[100];
    facebook[0].salary = 4342332;
    facebook[0].rating = 9.3;
    strcpy(facebook[0].name, "Aditya");
    printf("%d\n", facebook[0].salary);
    printf("%f\n", facebook[0].rating);
    printf("%s\n", facebook[0].name);

    facebook[1].salary = 293;
    facebook[1].rating = 2.3;
    strcpy(facebook[1].name, "priyanshu");
    printf("%d\n", facebook[1].salary);
    printf("%f\n", facebook[1].rating);
    printf("%s\n", facebook[1].name);

    facebook[2].salary = 930;
    facebook[2].rating = 5.3;
    strcpy(facebook[2].name, "Raj");
    printf("%d\n", facebook[2].salary);
    printf("%f\n", facebook[2].rating);
     printf("%s\n", facebook[2].name);

    facebook[3].salary = 400;
    facebook[3].rating = 95.8;
    strcpy(facebook[3].name, "simu");
    printf("%d\n", facebook[3].salary);
    printf("%f\n", facebook[3].rating);
    printf("%s\n", facebook[3].name);

    facebook[4].salary = 4342332;
    facebook[4].rating = 9.3;
    strcpy(facebook[4].name, "Alka");
    printf("%d\n", facebook[4].salary);
    printf("%f\n", facebook[4].rating);
    printf("%s\n", facebook[4].name);

    facebook[5].salary = 9932;
    facebook[5].rating = 7.3;
    strcpy(facebook[5].name, "Chhoti");
    printf("%d\n", facebook[5].salary);
    printf("%f\n", facebook[5].rating);
    printf("%s\n", facebook[5].name);

    return 0;
}