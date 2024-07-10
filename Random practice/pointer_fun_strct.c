#include<stdio.h>
struct student{
    int roll;
    float cgp;

};

void printinfo(struct student s1);

int main(){
    struct student s1={12,5.4};
    // struct student *ptr=&s1;
    s1.roll=45;
    printinfo(s1);
    return 0;
}
void printinfo(struct student s1){

    printf("roll no=%d\n", (s1.roll));
    s1.roll=89;
}