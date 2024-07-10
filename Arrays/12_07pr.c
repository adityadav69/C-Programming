#include<stdio.h>

int main(){
    int multable[3][10];
    int num[]={2,7,9};
    for(int i=0;i<3;i++){
        for(int j=0;j<10;j++){
            multable[i][j]=num[i]*(j+1);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<10;j++){
            printf("%d ", multable[i][j]);

        }
        printf("\n");
    }
    return 0;
}