#include<stdio.h>

int main(){
    int marks[3]={43,33,23};
    for(int i=0;i<3;i++){
        printf("The score of student%d is %d\n", i+1,marks[i]);
    }
    return 0;
}
