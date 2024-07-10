#include<stdio.h>

int main(){
    int age=34;
    if(age>35){
        printf("you can drive");
    }
    else if(age>43){
        printf("you are very young man");
    }
    else if(age<42){
        printf("you are old");
    }
    else{
        printf("invalid");
    }
    return 0;
}