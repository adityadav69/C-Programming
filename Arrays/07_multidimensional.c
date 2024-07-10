#include <stdio.h>

int main()
{
    int marks[2][3]={
        {76,54,98},
        {65,45,76}
    };

    // marks[0][0] = 76;
    // marks[0][1] = 54;
    // marks[0][2] = 98;
    // marks[1][0] = 65;
    // marks[1][1] = 45;
    // marks[1][2] = 76;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d ",marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}