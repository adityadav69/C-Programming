#include <stdio.h>

int main()
{
    int n1, n2, n3;
    int multable[5][10];
    printf("Enter the n1 n2 n3");
    scanf("%d%d%d",&n1,&n2,&n3);

    // printf("Enter the N1");
    // scanf("%d", &n1);
    // printf("Enter the N2");
    // scanf("%d", &n2);
    // printf("Enter the N3");
    // scanf("%d", &n3);
   
    int num[] = {n1, n2, n3};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            multable[i][j] = num[i] * (j + 1);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", multable[i][j]);
        }
        printf("\n");
    }
    return 0;
}