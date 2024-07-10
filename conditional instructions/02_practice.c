#include<stdio.h>

int main(){
    int marks1,marks2,marks3;
    float totalpercent;
    printf("enter the marks in subjects 1:");
    scanf("%d", &marks1);
    printf("enter the marks in subjects 2:");
    scanf("%d", &marks2);
    printf("enter the marks in subjects 3:");
    scanf("%d", &marks3);
    totalpercent=(marks1+marks2+marks3)/3;
    printf("%f\n", totalpercent);
    if(totalpercent>40 && marks1>33 && marks2>33 && marks3>33){
        printf("pass");
    }
    else{
        printf("fail");
    }
    
    return 0;
}