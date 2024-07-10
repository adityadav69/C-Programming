#include<stdio.h>
#include<string.h>
struct student{
    int roll_no;
    float cgpa;
    char name[100];
};

int main(){

    // struct student s1,s2,s3;
    // s1.roll_no=9;
    // s1.cgpa=8.7;
    // strcpy(s1.name,"aditya");
    // s2.roll_no=4;
    // s2.cgpa=8.2;
    // strcpy(s2.name,"Kishan");
    // s3.roll_no=2;
    // s3.cgpa=8.4;
    // strcpy(s3.name,"Ashish");

    // printf("Roll number,cgpa,and name of student s1 is %d,%f,%s\n", s1.roll_no,s1.cgpa,s1.name );
    // printf("Roll number,cgpa,and name of student s2 is %d,%f,%s\n", s2.roll_no,s2.cgpa,s2.name );
    // printf("Roll number,cgpa,and name of student s3 is %d,%f,%s\n", s3.roll_no,s3.cgpa,s3.name );

    struct student s1={5,6.4,"prince"};
    printf("%d,%f,%s,", s1.roll_no,s1.cgpa,s1.name);
    
    return 0;
}